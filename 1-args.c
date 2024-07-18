#include <stdio.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector (unused)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    (void)argv; // This line avoids unused parameter warning
    printf("%d\n", argc - 1);
    return 0;
