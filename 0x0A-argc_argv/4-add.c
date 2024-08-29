#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Adds positive numbers passed as arguments.
* @argc: Number of arguments.
* @argv: Array of argument strings.
* 
* Return: 0 if successful, 1 if an error occurs.
*/
int main(int argc, char *argv[])
{
int i, j, sum = 0;
/* Check if no arguments are passed */
if (argc == 1)
{
printf("0\n");
return (0);
}
/* Iterate through arguments starting from index 1 */
for (i = 1; i < argc; i++)
{
/* Check if each character of the argument is a digit */
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
/* Add the number to sum */
sum += atoi(argv[i]);
}
/* Print the result */
printf("%d\n", sum);
return (0);
}
