#include "main.h"
/**
* _pow_recursion - Returns the value of x raised to the power of y.
* @x: The base value.
* @y: The exponent value.
*
* Return: The result of x raised to the power of y.
*         If y is lower than 0, returns -1.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);  // Error case: negative exponent
if (y == 0)
return (1);  // Base case: any number raised to the power of 0 is 1
return (x * _pow_recursion(x, y - 1));  // Recursive case: multiply base x by x^(y-1)
}
