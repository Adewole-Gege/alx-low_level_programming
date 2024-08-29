# 0x0A. Argc, Argv

This directory contains C programs that demonstrate the use of `argc` and `argv` to handle command-line arguments in C programming. The programs perform various tasks based on the arguments provided.

## Files

- **0-whatsmyname.c**: Prints the name of the program.
- **1-args.c**: Prints the number of arguments passed to the program.
- **2-args.c**: Prints all arguments passed to the program, each on a new line.
- **3-mul.c**: Multiplies two numbers and prints the result. If there are not exactly two arguments, it prints `Error` and returns 1.
- **4-add.c**: Adds positive numbers and prints the result. If any argument is not a digit, it prints `Error` and returns 1. If no arguments are passed, it prints `0`.
- **100-change.c**: Prints the minimum number of coins needed to make change for a given amount of cents. Uses coin values of 25, 10, 5, 2, and 1 cent. If the argument is negative or not provided, it prints `Error` or `0` respectively.

## Compilation

To compile the programs, use the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file>.c -o <output>



Usage
0-whatsmyname: ./<output>
1-args: ./<output> <arguments>
2-args: ./<output> <arguments>
3-mul: ./<output> <num1> <num2>
4-add: ./<output> <numbers>
100-change: ./<output> <cents>
Example
To run 4-add and add numbers:

bash
Copy code
./add 1 2 3 4
This will output 10.

Requirements
All files should end with a new line.
Code should adhere to the Betty style.
No use of global variables.
Functions should be no more than 5 per file.
The header file main.h should include all function prototypes and _putchar prototype.

License
This project is licensed under the MIT License - see the LICENSE file for details.

This `README.md` provides an overview of the directory, listing the files and their purposes, along with instructions for compilation and usage. Adjust any details as necessary to fit your specific project.

