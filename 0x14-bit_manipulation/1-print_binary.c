#include "main.h"
/**
* print_binary - Prints the binary representation of a number.
* @n: The number to be printed in binary.
*/
void print_binary(unsigned long int n)
{
/* Handle the case where n is 0 */
if (n == 0)
{
_putchar('0');
return;
}
/* Recursively call the function to print each bit */
if (n >> 1)
print_binary(n >> 1);
/* Print the current bit */
_putchar((n & 1) ? '1' : '0');
}
