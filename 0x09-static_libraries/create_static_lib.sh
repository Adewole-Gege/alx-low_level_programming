#!/bin/bash
# Create object files from all .c files in the current directory
gcc -c *.c
# Create the static library liball.a from the object files
ar rcs liball.a *.o
# Clean up the object files
rm *.o
