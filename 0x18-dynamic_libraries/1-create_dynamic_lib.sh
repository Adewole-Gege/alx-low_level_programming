#!/bin/bash
# Remove old object files and the existing dynamic library
rm -f *.o libdynamic.so

# Compile only the necessary .c files into the dynamic library, excluding dynamic_lib.c
gcc -shared -o libdynamic.so -fPIC $(ls *.c | grep -v "dynamic_lib.c" | grep -v "main.c" | grep -v "0-main.c")
