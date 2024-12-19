#include <stdio.h>
#include <math.h>

/**
*  * main - finds and prints the largest prime factor of 612852475143
*   *
*    * Return: Always 0.
*     */
int main(void)
{
long n = 612852475143;
long largest_prime_factor = 1;
long i;

// Divide by 2 until the number is odd
//     while (n % 2 == 0)
//         {
//                 largest_prime_factor = 2;
//                         n /= 2;
//                             }
//
//                                 // Check for odd factors starting from 3
//                                     for (i = 3; i <= sqrt(n); i += 2)
//                                         {
//                                                 while (n % i == 0)
//                                                         {
//                                                                     largest_prime_factor = i;
//                                                                                 n /= i;
//                                                                                         }
//                                                                                             }
//
//                                                                                                 // If n is still greater than 2, then it's a prime factor larger than sqrt(n)
//                                                                                                     if (n > 2)
//                                                                                                             largest_prime_factor = n;
//
//                                                                                                                 printf("%ld\n", largest_prime_factor);
//                                                                                                                     return (0);
//                                                                                                                     }
//
