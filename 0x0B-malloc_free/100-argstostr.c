#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of your program.
* @ac: argument count
* @av: argument vector
*
* Return: pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len, total = 0;
int newline_count = ac - 1; /* Number of newlines needed */
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate total length of concatenated string */
for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len] != '\0')
{
len++;
total++;
}
}
/* Add space for newlines */
total += newline_count;
/* Allocate memory for concatenated string + null terminator */
str = malloc(sizeof(char) * (total + 1));
if (str == NULL)
return (NULL);
/* Copy each argument followed by newline */
total = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
str[total++] = av[i][j++];
}
/* Add newline after each argument */
if (i < ac - 1)
str[total++] = '\n';
}
str[total] = '\0'; /* Null terminator */
return (str);
}
