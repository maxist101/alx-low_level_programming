#!/bin/bash
wget -P /tmp/ https://raw.github.com/Tecnophille/alx-low_level_programming/master/0x18-dynamic_libraries/liboutput.so
export LD_PRELOAD=/tmp/liboutput.so
