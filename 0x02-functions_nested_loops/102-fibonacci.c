#include <stdio.h>
/**
* main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
*
* Return: Always 0.
*/
int main(void)
{
int count;
unsigned long a = 1, b = 2, next;
for (count = 1; count <= 50; count++)
{
if (count == 50)
{
printf("%lu\n", a);
}
else
{
printf("%lu, ", a);
}
next = a + b;
a = b;
b = next;
}
return (0);
}
