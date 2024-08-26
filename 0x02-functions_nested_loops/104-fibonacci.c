#include <stdio.h>
/**
* main - Prints the first 98 Fibonacci numbers.
*
* Return: Always 0.
*/
int main(void)
{
unsigned long a = 1, b = 2, next;
int count;
printf("%lu, %lu", a, b);
for (count = 3; count <= 98; count++)
{
next = a + b;
if (count != 98)
printf(", ");
else
printf("\n");
printf("%lu", next);
a = b;
b = next;
}
return (0);
}
