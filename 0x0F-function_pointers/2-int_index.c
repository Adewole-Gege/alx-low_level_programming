#include "function_pointers.h"
#include <stddef.h>

/**
\t* int_index - searches for an integer
\t* @array: array to search
\t* @size: number of elements in the array
\t* @cmp: pointer to the function to be used to compare values
\t*
\t* Return: index of the first element for which the cmp function does
\t*         not return 0, or -1 if no element matches or if size <= 0
\t*/
int int_index(int *array, int size, int (*cmp)(int))
{
\tint i;

\tif (array == NULL || cmp == NULL || size <= 0)
\treturn (-1);

\tfor (i = 0; i < size; i++)
\t{
\tif (cmp(array[i]) != 0)
\treturn (i);
\t}

\treturn (-1);
}
