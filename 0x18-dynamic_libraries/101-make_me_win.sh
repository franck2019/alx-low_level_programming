#!/bin/bash
wget -P /tmp https://github.com/franck2019/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
