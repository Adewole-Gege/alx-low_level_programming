# 0x0D-preprocessor

## Description

This project covers the basics of the C preprocessor, including the use of macros and include guards.

## Files

### 0-object_like_macro.h

This header file defines an object-like macro named `SIZE` which expands to `1024`.

### 0-main.c

This is a test file that includes the `0-object_like_macro.h` header file and uses the `SIZE` macro.

#### main - check the code

```c
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
