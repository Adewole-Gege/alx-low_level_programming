#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints the minimum number of coins needed for change.
* @argc: Number of arguments.
* @argv: Array of argument strings.
* 
* Return: 0 if successful, 1 if an error occurs.
*/
int main(int argc, char *argv[])
{
int cents, num_coins = 0;
/* Check if the number of arguments is not exactly 1 */
if (argc != 2)
{
printf("Error\n");
return (1);
}
/* Convert the argument to an integer */
cents = atoi(argv[1]);
/* Check if the number is negative */
if (cents < 0)
{
printf("0\n");
return (0);
}
/* Calculate the minimum number of coins */
num_coins += cents / 25;
cents %= 25;
num_coins += cents / 10;
cents %= 10;
num_coins += cents / 5;
cents %= 5;
num_coins += cents / 2;
cents %= 2;
num_coins += cents; /* Remaining cents will be 0 or 1 */
/* Print the result */
printf("%d\n", num_coins);
return (0);
}
