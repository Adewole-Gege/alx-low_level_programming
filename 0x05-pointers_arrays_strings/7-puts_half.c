#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string to print
 */
void puts_half(char *str)
{
    int length = 0;
    int i, start;

    /* Calculate the length of the string */
    while (str[length] != '\0')
    {
        length++;
    }

    /* Determine where to start printing based on string length */
    if (length % 2 == 0)
    {
        start = length / 2;
    }
    else
    {
        start = (length + 1) / 2;
    }

    /* Print the second half of the string */
    for (i = start; i < length; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
