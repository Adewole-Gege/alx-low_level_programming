#include "main.h"
/**
* _isalpha - checks if a character is alphabetic
* @c: the character to check
*
* Return: 1 if c is a letter (uppercase or lowercase), 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
