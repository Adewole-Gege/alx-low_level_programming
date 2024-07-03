#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
    int sign = 1; // Sign of the number, initialize to positive
    int num = 0;  // Resulting number to be returned

    // Iterate through the string until a digit or sign is found
    while (*s)
    {
        // If the character is a digit
        if (*s >= '0' && *s <= '9')
        {
            // Calculate the number considering the sign
            num = num * 10 + sign * (*s - '0');
            
            // Check for overflow (handled by fsanitize flag)
            // In practice, handle overflow if necessary
        }
        // If the character is a sign
        else if (*s == '-')
        {
            // Update sign to negative
            sign = -1;
        }
        else if (*s == '+')
        {
            // Update sign to positive (not necessary, as sign starts as 1)
            sign = 1;
        }
        // If a digit or sign has been found, break out of the loop
        if (*s >= '0' && *s <= '9')
        {
            break;
        }
        s++;
    }

    return num;
}
