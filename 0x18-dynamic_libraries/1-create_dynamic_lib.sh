#!/bin/bash

# Compile specific .c files for the dynamic library
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c _putchar.c _abs.c _strlen.c dynamic_lib.c

# Create the dynamic library
gcc -shared -o libdynamic.so _putchar.o _abs.o _strlen.o dynamic_lib.o

# Clean up object files
rm *.o
