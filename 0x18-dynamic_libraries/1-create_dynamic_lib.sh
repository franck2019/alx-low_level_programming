#!/bin/bash

# compilation step
echo "compilation step"

for cfile in *.c; do

	gcc -c -Wall -Werror $cfile # compile

	if [[ $? -eq 0 ]]  #check if there is compiling error
	then
		echo "$cfile compiled"
	else
		echo "failed to compile $cfile"
	fi
done

# create the library
echo "Library creation step"
gcc -shared -o liball.so *.o

# make the library available
echo "Add the liball.so to the library path"
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
