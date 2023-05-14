#!/bin/bash
mkdir -p build
cd build 

PATH=$PATH:~/Documents/git/ext/emsdk/upstream/emscripten
PATH=$PATH:~/Documents/git/ext/emsdk/upstream/bin

SOURCE="../wasmhost.cpp ../bumpyopt.cpp"

NAME=app
BASE=http://localhost:8084/

INCLUDES=
#EXPORTED="['_appLoop', '_appInit', '_appFinish', '_apiDebug', '_apiShow']"
EXPORTED="['_appLoop', '_appInit', '_appFinish', '_appMemory', '_appVideo']"
#CONFIGURATION="-s TOTAL_STACK=1024 -s TOTAL_MEMORY=65536 -s MINIMAL_RUNTIME=1 -s WASM=1 -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s WARN_ON_UNDEFINED_SYMBOLS=0"
CONFIGURATION="-s TOTAL_STACK=1024 -s TOTAL_MEMORY=2097152 -s MINIMAL_RUNTIME=0 -s WASM=1 -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s WARN_ON_UNDEFINED_SYMBOLS=0 -s ASSERTIONS=1 -sASYNCIFY "
DEFINES="-DEMSCRIPTEN"
emcc $INCLUDES $SOURCE -gsource-map -O3 --std=c++11 $CONFIGURATION $DEFINES --source-map-base $BASE -s EXPORTED_FUNCTIONS="${EXPORTED}" -o $NAME.js || exit 1
#node /Users/gabrielvalky/Documents/git/LA104/system/os_platform/wasm/htmllite/package.js $NAME

#cp ../source/wasm/app.html app.html

cat > pack.js <<- EOM

var app = process.argv.length == 3 ? process.argv[2] : "app";
var fs = require("fs");
var prefix = 'Module = typeof(Module) != "undefined" ? Module : {}; Module["wasmBinary"] = (() => { var wasmcode="';
var suffix = '"; return Uint8Array.from(atob(wasmcode), c => c.charCodeAt(0));})();';

fs.writeFileSync(app+"_inline.js", prefix + fs.readFileSync(app + ".wasm").toString("base64") + suffix);
EOM

node pack app
rm pack.js
cp ../app.js app.js
cp ../*.cpp .
cp ../*.h .
cp ../bumpy.html .
cp ../../js/resources.js .