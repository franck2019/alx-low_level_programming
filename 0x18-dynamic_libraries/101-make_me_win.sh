#!/bin/bash
wget -O /tmp/win.so https://github.com/franck2019/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/win.so ls -lh
