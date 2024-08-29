#include "main.h"
/**
* is_prime_helper - Checks if a number is divisible by any number other than 1 and itself.
* @n: The number to check.
* @i: The divisor to check against.
*
* Return: 1 if n is a prime number, 0 otherwise.
*/
int is_prime_helper(int n, int i)
{
if (n <= 1)
return (0);
if (i == 1)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i - 1));
}
/**
* is_prime_number - Checks if a number is a prime number.
* @n: The number to check.
*
* Return: 1 if n is a prime number, 0 otherwise.
*/
int is_prime_number(int n)
{
return (is_prime_helper(n, n / 2));  /* Start checking from n/2 */
} 
