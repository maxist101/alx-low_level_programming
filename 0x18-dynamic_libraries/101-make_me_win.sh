#!/bin/bash
wget -P .. https://raw.githubusercontent.com/maxist101/alx-low_level_programming/master/0x18-dynamic_libraries/liboutput.so
export LD_PRELOAD="$PWD/../liboutput.so"
