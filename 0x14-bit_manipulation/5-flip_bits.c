#include "main.h"
/**
* flip_bits - Returns the number of bits needed to flip to get from one number to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits needed to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;
while (xor_result > 0)
{
count += xor_result & 1;  /* Check if the least significant bit is 1 */
xor_result >>= 1;         /* Shift right to process the next bit */
}
return count;
}
