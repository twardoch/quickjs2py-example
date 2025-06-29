#!/usr/bin/env bash

git clone https://github.com/horhof/quickjs/
cd quickjs
make
cd ..
pip3 install --user --upgrade PyBindGen
#mkdir -p example
#cd example
#cp ../quickjs/examples/hello.js .
qjsc -e -N hello -o hello.c hello.js;
#gcc -I../quickjs/ hello.h
