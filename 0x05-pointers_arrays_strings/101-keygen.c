#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    int i, sum, last;

    srand(time(0)); // Seed the random number generator with current time

    sum = 0;
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % ('~' - ' ' + 1) + ' '; // Generate ASCII printable characters
        sum += password[i];
    }

    last = '~' - ' ' + 1 - sum % ('~' - ' ' + 1);
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the string

    password[PASSWORD_LENGTH - 1] = last + ' '; // Adjust last character

    printf("%s", password);

    return (0);
}
