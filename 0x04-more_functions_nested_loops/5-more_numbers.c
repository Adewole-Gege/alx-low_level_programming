#include "main.h"

/**
* more_numbers - Prints 10 times the numbers from 0 to 14,
* followed by a new line.
*/
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar('0' + (j / 10)); /* Print the tens place */
}
_putchar('0' + (j % 10));   /* Print the units place */
}
_putchar('\n'); /* Print a newline after each sequence */
}
}
