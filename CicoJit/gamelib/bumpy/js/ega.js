var EGA = {
  palette :
    [0x000000, 0x0000b0, 0x00b000, 0x00b0b0, 0xb00000, 0xb000b0, 0xb0b000, 0xb0b0b0,
	   0x808080, 0x0000ff, 0x00ff00, 0x00ffff, 0xff0000, 0xff00ff, 0xffff00, 0xffffff],
  memory : null,
  getPixel : function(x, y)
  {
  	var off = y * 40 + (x >> 3);
	var mask = 0x80 >> (x & 7);
  	var b = 0;

   	var addr = this.cfgAddr + off;
  	var latch = this.memory[addr];
  	if ( latch & mask ) b |= 1;
		latch >>= 8;
  	if ( latch & mask ) b |= 2;
		latch >>= 8;
  	if ( latch & mask ) b |= 4;
		latch >>= 8;
  	if ( latch & mask ) b |= 8;
		latch >>= 8;
  	return this.palette[b];
  },
  write : function(addr, val)
  {
                addr -= 0xa0000;
                if (this.nWriteMode != 1)
			this.LoadLatch(addr);
		var data = this.ModeOperation(val);
		var pixels = this.aLatch32[0];
		pixels &= this.full_not_map_mask;
		pixels |= (data & this.full_map_mask);
		this.aLatch32[0] = pixels;
		this.StoreLatch(addr);
  },
  read : function(addr)
  {
                addr -= 0xa0000;
		this.LoadLatch(addr);
		if ( this.nReadMode == 0 )
			return this.aLatch8[this.cfgReadMapSelect];
		if ( this.nReadMode == 1 )
		{
			this.aLatch32[1] = (this.aLatch32[0] & this.arrFillTable[this.cfgDontCare]) ^ 
				this.arrFillTable[this.cfgCompare & this.cfgDontCare]; 
			return ~(this.aLatch8[4] | this.aLatch8[5] | this.aLatch8[6] | this.aLatch8[7]);
		}
		return 0;
  },
  init : function()
  {
    this.memory = new Uint32Array(0x10000*8);
    this.aLatchb = new ArrayBuffer(8);
    this.aLatch32 = new Uint32Array(this.aLatchb, 0, 2);
    this.aLatch8 = new Uint8Array(this.aLatchb, 0, 8);

		for ( var i=0; i<16; i++)
		{
			this.arrFillTable[i]=
				((i & 1) ? 0x000000ff : 0) |
				((i & 2) ? 0x0000ff00 : 0) |
				((i & 4) ? 0x00ff0000 : 0) |
				((i & 8) ? 0xff000000 : 0) ;
		}
		for ( var i=0; i<256; i++ )
		{
			this.arrExpandTable[i] = i | (i << 8)| (i <<16) | (i << 24);
		}
  },

  // Emulation
	nWriteMode : 0,
	nReadMode : 0,
	aLatchb : null,
  aLatch8 : null,
  aLatch32 : null,

	cfgAddr : 0,
	cfgReadMapSelect : 0,
	cfgBitMask : 0xff,
	cfgEnableSetReset : 0xff,
	cfgSetReset : 0xff,
	cfgDontCare : 15,
	cfgCompare : 0,
	cfgMapMask : 15,
	cfgDataRotate : 0,
	cfgRasterOp : 0,
	arrFillTable : [],
	arrExpandTable : [],

	// temp
	full_map_mask : 0xffffffff,
	full_not_map_mask : 0,
	full_bit_mask : 0xffffffff,
	full_set_reset : 0xffffffff,
	full_enable_and_set_reset : 0,
	full_enable_set_reset : 0xffffffff,
	full_not_enable_set_reset : 0xffffffff,

	SetAddrHi : function(b)
	{
		this.cfgAddr &= 0x00ff;
		this.cfgAddr |= b<<8;
	},
	SetAddrLo : function(b)
	{
		this.cfgAddr &= 0xff00;
		this.cfgAddr |= b;
	},
	SetMapMask : function(b) // 3c5.2
	{
		this.cfgMapMask = b;
		this.full_map_mask = this.arrFillTable[b & 15];
		this.full_not_map_mask = ~this.full_map_mask;
//console.log("mask: " + b + " " + this.full_map_mask.toString(16));
	},
	SetSR : function(b)
	{
		this.cfgSetReset = b & 0x0f;
		this.full_set_reset = this.arrFillTable[b & 0x0f];
		this.full_enable_and_set_reset = this.full_set_reset & this.full_enable_set_reset;
	},
	SetEnableSR : function(b)
	{
		this.cfgEnableSetReset = b & 0x0f;
		this.full_enable_set_reset = this.arrFillTable[b & 0x0f];
		this.full_not_enable_set_reset = ~this.full_enable_set_reset;
		this.full_enable_and_set_reset = this.full_set_reset & this.full_enable_set_reset;
	},
	SetCompare : function(b)
	{
		this.cfgCompare = b & 0xf;
	},
	SetMode : function(b)
	{
		this.nWriteMode = b & 3;
		this.nReadMode = (b >> 3) & 1;
	},
	SetDontCare : function(b)
	{
		this.cfgDontCare = b & 0xf;
	},
	SetBitMask : function(b)
	{
		this.cfgBitMask = b;
		this.full_bit_mask = this.arrExpandTable[b];
	},
	SetRotate : function(b)
	{
		this.cfgDataRotate = b & 7;
		this.cfgRasterOp = (b >> 3)&3;	
	},

	LoadLatch : function (dwAddr)
	{
    this.aLatch32[0] = this.memory[dwAddr];
	},
	StoreLatch : function(dwAddr, val)
	{
    this.memory[dwAddr] = this.aLatch32[0];
	},
	ModeOperation : function(val) 
	{
		var full;
		switch (this.nWriteMode) {
		case 0x00:
			// Write Mode 0: In this mode, the host data is first rotated as per the Rotate Count field, then the Enable Set/Reset mechanism selects data from this or the Set/Reset field. Then the selected Logical Operation is performed on the resulting data and the data in the latch register. Then the Bit Mask field is used to select which bits come from the resulting data and which come from the latch register. Finally, only the bit planes enabled by the Memory Plane Write Enable field are written to memory.
			val = ((val >> this.cfgDataRotate) | (val << (8-this.cfgDataRotate))) & 0xff;
			full = this.arrExpandTable[val];
			full = (full & this.full_not_enable_set_reset) | this.full_enable_and_set_reset;
			full = this.RasterOp(full, this.full_bit_mask);
			break;
		case 0x01:
			// Write Mode 1: In this mode, data is transferred directly from the 32 bit latch register to display memory, affected only by the Memory Plane Write Enable field. The host data is not used in this mode.
			full = this.aLatch32[0];
			break;
		case 0x02:
			//Write Mode 2: In this mode, the bits 3-0 of the host data are replicated across all 8 bits of their respective planes. Then the selected Logical Operation is performed on the resulting data and the data in the latch register. Then the Bit Mask field is used to select which bits come from the resulting data and which come from the latch register. Finally, only the bit planes enabled by the Memory Plane Write Enable field are written to memory.
			full = this.RasterOp(this.arrFillTable[val&0xF], this.full_bit_mask);
			break;
		case 0x03:
			// Write Mode 3: In this mode, the data in the Set/Reset field is used as if the Enable Set/Reset field were set to 1111b. Then the host data is first rotated as per the Rotate Count field, then logical ANDed with the value of the Bit Mask field. The resulting value is used on the data obtained from the Set/Reset field in the same way that the Bit Mask field would ordinarily be used. to select which bits come from the expansion of the Set/Reset field and which come from the latch register. Finally, only the bit planes enabled by the Memory Plane Write Enable field are written to memory.
			val = ((val >> this.cfgDataRotate) | (val << (8-this.cfgDataRotate))) & 0xff;
			full = this.RasterOp(this.full_set_reset, this.arrExpandTable[val] & this.full_bit_mask);
			break;
		}
		return full;
	},
	RasterOp : function(input, mask) 
	{
		switch (this.cfgRasterOp) {
		case 0x00: // None
			return (input & mask) | (this.aLatch32[0] & ~mask);
		case 0x01: // AND
			return (input | ~mask) & this.aLatch32[0];
		case 0x02: // OR
			return (input & mask) | this.aLatch32[0];
		case 0x03: // XOR
			return (input & mask) ^ this.aLatch32[0];
		};
		return 0;
	},
    PortWrite16: function(port, val)
    {
	if ( port == 0x3c4 )
	{
            EGA._last3c4 = val & 0xff;
		if ( (val & 0x00ff) == 0x02 )
		{
			EGA.SetMapMask( val>>8); // 3c5.2
			return true;
		}
	return true;	
//            assert(0);	
	}	
	if ( port == 0x3d4 )
	{
		if ( (val & 0x00ff) == 0x0c )
		{
			EGA.SetAddrHi( val >>8 );
			return true;
		}
		if ( (val & 0x00ff) == 0x0d )
		{
			EGA.SetAddrLo( val >> 8);
			return true;
		}
	}
	if ( port == 0x3ce )
	{
		switch ( val & 0xff )
		{
		case 0x00: EGA.SetSR( val >> 8 ); return true;
		case 0x01: EGA.SetEnableSR( val >> 8 ); return true;
		case 0x02: EGA.SetCompare( val >> 8 ); return true;
		case 0x05: EGA.SetMode( val >> 8 ); return true;
		case 0x07: EGA.SetDontCare( val >> 8 ); return true;
		case 0x08: EGA.SetBitMask( val >> 8 ); return true;
		case 0x03: EGA.SetRotate( val >> 8 ); return true;
                case 0x04: this.cfgReadMapSelect = val >> 8; return true;
		}
	}
        console.log("unhandled write16 ", port.toString(16));

	assert(0);
        return false;

    },
    PortWrite8: function(port, val)
    {
        if (port == 0x3d4)
        {
            EGA._crtReg = val;
            return true;
        }
        if (port == 0x3d5)
        {
            EGA.PortWrite16(0x3d4, (val << 8)|EGA._crtReg);
            return true;
        }
        if ( port == 0x3ce )
        {
            EGA._lastPort = 0x3ce;
            EGA._lastData = val;
            return true;
        }
        if (port == 0x3cf)
        {
            return this.PortWrite16 ( EGA._lastPort, (val<<8)|EGA._lastData);
        }
        if (port == 0x3c8)
        {
            EGA._palIndex = Math.floor(val*3/2);
            return true;
        }
        if (port == 0x3c9)
        {
            var base = Math.floor(EGA._palIndex/3);
            var ch = EGA._palIndex++%3;
            val *= 4;
            switch (ch)
            {
                case 2: EGA.palette[base] = (EGA.palette[base] & 0xffff00) | (val << 0); break;
                case 1: EGA.palette[base] = (EGA.palette[base] & 0xff00ff) | (val << 8); break;
                case 0: EGA.palette[base] = (EGA.palette[base] & 0x00ffff) | (val << 16); break;
            }

            return true;
        }
        if (port == 0x3c4)
        {
            EGA._last3c4 = val;
            return true;
        }
        if (port == 0x3c5)
        {
            EGA.PortWrite16(0x3c4, (val << 8)|EGA._last3c4);
            return true;
        }

        console.log("unhandled write8 ", port.toString(16));
	assert(0);

        return false;
/*
    virtual bool PortWrite8(int port, int data) override
    {
        static int lastPort = 0, lastData = 0;
        if ( port == 0x3c0 )
        {
            static int index = -1;
            if (index == -1)
            {
                if (data <= 0x10)
                    index = data;
            }
            else
            {
                SetPaletteIndex(index, data);
                index = -1;
            }
//            std::cout << "port 3c0 ignore\n";
            return true;
        }
        if ( port == 0x3ce )
        {
            lastPort = 0x3ce;
            lastData = data;
            return true;
        }
        if (port == 0x3cf)                                                             
        {
            return PortWrite16 ( lastPort, (data<<8)|lastData);
        }

        return false;
    }

*/
    },
    SetPaletteIndex: function(index, rgb)
    {
/*
        var r = ((rgb & 4) ? 2 : 0) + ((rgb & 32) ? 1 : 0);
        var g = ((rgb & 2) ? 2 : 0) + ((rgb & 16) ? 1 : 0);
        var b = ((rgb & 1) ? 2 : 0) + ((rgb & 8) ? 1 : 0);
        r = Math.floor(r * 255 / 3);
        g = Math.floor(g * 255 / 3);
        b = Math.floor(b * 255 / 3);
*/
//        this.palette[index] = b | (g << 8) | (r << 16);
//console.log(index, rgb, this.palette[index].toString(16));
//        console.log(index, this.palette[index].toString(16));
    },
   Interrupt: function()
   {
        if (r16[ax] == 0x1012)
        {
            for (var i=0; i<r16[cx]; i++)
            {
                var r = memory[es*16 + r16[dx]+i*3]*4;
                var g = memory[es*16 + r16[dx]+i*3+1]*4;
                var b = memory[es*16 + r16[dx]+i*3+2]*4;
                
                var palIndex = r16[bx] + i;
                this.palette[palIndex] = b | (g << 8) | (r << 16);
            }
            return true;
        }
        if (r16[ax] == 0x1000)
          return true;
      console.log("ega int: ah="+r8[ah].toString(16)+" al="+r8[al].toString(16));
     return true;
   },
   PortRead8: function(port)
   {
      if (EGA._crtReg == 0x0c)
          return EGA.cfgAddr>>8;
      assert(0);
  }

};