#!/bin/bash
wget -qP /tmp/ https://github.com/nobleenia/alx-low_level_programming/raw/master/0x18-dynamic_libraries/inject_code.so
export LD_PRELOAD="/tmp/inject_code.so"
