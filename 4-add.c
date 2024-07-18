#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string is a positive digit
 * @str: The string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success), 1 on error
 */
int main(int argc, char *argv[])
{
    int i, sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        if (!is_digit(argv[i]))
        {
            printf("Error\n");
            return 1;
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);

    return 0;
}

