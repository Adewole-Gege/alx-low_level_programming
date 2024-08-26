#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);  /* Expected output: 1056 */

    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);  /* Expected output: 1024 */

    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);  /* Expected output: 99 */

    return (0);
}
