#include <stdio.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    (void)argc; // This line avoids unused parameter warning
    printf("%s\n", argv[0]);
    return 0;
}
