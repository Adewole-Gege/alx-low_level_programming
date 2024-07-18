#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success), 1 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    int amount = atoi(argv[1]);

    if (amount < 0)
    {
        printf("0\n");
        return 0;
    }

    int coins = 0;
    int denominations[] = {25, 10, 5, 2, 1};
    int num_denominations = sizeof(denominations) / sizeof(denominations[0]);
    
    for (int i = 0; i < num_denominations; i++)
    {
        coins += amount / denominations[i];
        amount %= denominations[i];
    }

    printf("%d\n", coins);

    return 0;
}
