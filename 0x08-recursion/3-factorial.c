#include "main.h"
/**
* factorial - Returns the factorial of a given number.
* @n: The number to calculate the factorial for.
*
* Return: The factorial of the number.
*         If n < 0, returns -1 to indicate an error.
*/
int factorial(int n)
{
if (n < 0)
return (-1);  // Error case: n is negative
if (n == 0)
return (1);  // Base case: factorial of 0 is 1
return (n * factorial(n - 1));  // Recursive case: n * factorial of n-1
}
