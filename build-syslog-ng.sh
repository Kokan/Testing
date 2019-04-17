#!/bin/bash

[ -f syslog-ng ] || git submodule update --init --recursive
cd syslog-ng
./autogen.sh
./configure --prefix=$(pwd)/install
make all
make install
cd -
