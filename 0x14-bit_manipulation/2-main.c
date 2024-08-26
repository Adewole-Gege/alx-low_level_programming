#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);  /* Expected output: 1 */

    n = get_bit(98, 1);
    printf("%d\n", n);  /* Expected output: 1 */

    n = get_bit(1024, 0);
    printf("%d\n", n);  /* Expected output: 0 */

    return (0);
}
