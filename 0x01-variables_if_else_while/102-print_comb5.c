#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int tens1, ones1, tens2, ones2;

    for (tens1 = 0; tens1 <= 9; tens1++)
    {
        for (ones1 = 0; ones1 <= 9; ones1++)
        {
            for (tens2 = tens1; tens2 <= 9; tens2++)
            {
                /* Start ones2 at ones1 if we are on the same tens digit */
                int start = (tens1 == tens2) ? ones1 : 0;

                for (ones2 = start; ones2 <= 9; ones2++)
                {
                    /* Print first number */
                    putchar(tens1 + '0');
                    putchar(ones1 + '0');
                    putchar(' ');

                    /* Print second number */
                    putchar(tens2 + '0');
                    putchar(ones2 + '0');

                    /* Check if this is not the last combination */
                    if (!(tens1 == 9 && ones1 == 9 && tens2 == 9 && ones2 == 9))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');

    return (0);
}
