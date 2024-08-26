#include <stdio.h>
#include "main.h"
/**
* print_times_table - Prints the `n` times table.
* @n: The number for which to print the times table.
*/
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j != 0)
{
printf(", ");
}
if (i * j < 10)
{
if (j != 0)
printf(" ");
printf(" ");
}
if (i * j >= 100)
{
printf("%d", i * j);
}
else if (i * j >= 10)
{
printf("%d", i * j);
}
else
{
printf(" %d", i * j);
}
}
printf("\n");
}
}
