#include "main.h"

/**
*  * print_number - prints an integer.
*   * @n: The integer to be printed.
*    */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;  // Take the absolute value
//     }
//
//         if (n / 10 != 0)  // Recursively print digits if there's more than one digit
//             {
//                     print_number(n / 10);
//                         }
//
//                             _putchar(n % 10 + '0');  // Print the last digit
//                             }
//
