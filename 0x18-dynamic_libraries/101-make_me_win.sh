#!/bin/bash
wget https://github.com/Thernee/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libmega_mil.so -O /tmp/libmega_mil.so
export LD_PRELOAD=/tmp/libmega_mil.so
