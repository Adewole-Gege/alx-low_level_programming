Dynamic Libraries in C Project Overview
This project explores the development and application of dynamic libraries in C. It involves compiling various C functions into shared libraries, creating automated scripts for library generation, and integrating these libraries with Python for extended functionality.

Project Components
Files
main.h: Contains function prototypes for all implemented C functions.
1-create_dynamic_lib.sh: A Bash script to automate the creation of a dynamic library from .c source files.
libdynamic.so: A shared library housing various string and memory manipulation functions.
100-operations.so: A shared library designed for integration with Python, offering callable C functions.
make-me-win.sh: A script utilizing LD_PRELOAD to alter program behavior for specific use cases.
Directories
src/: Holds all the C source files for building the dynamic libraries.
tests/: Contains test cases for validating the dynamic libraries in both C and Python environments.
build/: Directory for storing generated shared libraries and compiled executables.
How to Execute
1. Create a Dynamic Library
Run the provided script to compile the source files into a shared library:

bash
Copy code
./1-create_dynamic_lib.sh  
2. Test with C
Compile and execute a test program using the dynamic library:

bash
Copy code
gcc -Lbuild -o build/test_len tests/0-main.c -ldynamic  
export LD_LIBRARY_PATH=build:$LD_LIBRARY_PATH  
./build/test_len  
3. Test with Python
Run the Python script to verify the functionality of 100-operations.so:

bash
Copy code
python3 tests/100-tests.py  
4. Advanced Task
Use the make-me-win.sh script for manipulating a program's behavior:

bash
Copy code
./make-me-win.sh  
Project Structure
plaintext
Copy code
0x18-dynamic_libraries/  
│  
├── README.md                             # Project documentation and usage instructions  
├── main.h                                # Header file with function prototypes  
├── libdynamic.so                         # Compiled dynamic library (generated)  
├── liball.so                             # Dynamic library created using the script (generated)  
├── 1-create_dynamic_lib.sh               # Script to compile and generate liball.so  
├── make-me-win.sh                        # Script for advanced LD_PRELOAD task  
├── 100-operations.so                     # Library for Python-callable C functions  
│  
├── src/                                  # C source files for dynamic libraries  
│   ├── _putchar.c  
│   ├── _islower.c  
│   ├── _isalpha.c  
│   ├── _abs.c  
│   ├── _isupper.c  
│   ├── _isdigit.c  
│   ├── _strlen.c  
│   ├── _puts.c  
│   ├── _strcpy.c  
│   ├── _atoi.c  
│   ├── _strcat.c  
│   ├── _strncat.c  
│   ├── _strncpy.c  
│   ├── _strcmp.c  
│   ├── _memset.c  
│   ├── _memcpy.c  
│   ├── _strchr.c  
│   ├── _strspn.c  
│   ├── _strpbrk.c  
│   ├── _strstr.c  
│   └── 100-operations.c                 # C source for Python-callable operations  
│  
├── tests/                                # Test cases for validating library functionality  
│   ├── 0-main.c                         # C test for `_strlen` function  
│   └── 100-tests.py                     # Python script to test operations library  
│  
└── build/                                # Generated binaries and shared libraries  
    ├── libdynamic.so                    # Compiled dynamic library  
    ├── liball.so                        # Dynamic library created by the script  
    └── test_len                         # Executable to test the library in C
