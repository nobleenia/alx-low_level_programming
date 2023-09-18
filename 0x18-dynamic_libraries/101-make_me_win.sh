#!/bin/bash
wget -qP /tmp/alx-low_level_programming/0x18-dynamic_libraries ./inject_code.so
export LD_PRELOAD="/tmp/inject_code.so"
