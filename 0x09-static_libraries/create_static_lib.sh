#!/bin/bash

# compilation step

for cfile in *.c; do

	oname=$(echo $cfile | cut -d. -f1) # retrieve the name of the c file

	ofile=$(echo $oname.o) # add the .o extension

	gcc -c $cfile -o $ofile # compile

	if [[ $? -eq 0 ]]  #check if there is compiling error
	then
		echo "$cfile compiled into $ofile"
	else
		echo "failed to compile $cfile into $ofile"
	fi
done

# create the library
ar rc liball.a *.o
ranlib liball.a #indexe it
