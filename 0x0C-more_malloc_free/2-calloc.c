#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _calloc - Allocates memory for an array
* @nmemb: Number of elements
* @size: Size of each element
* Return: Pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

memset(ptr, 0, nmemb * size);
return (ptr);
}
