#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the list_t list to print
* Return: the number of nodes printed
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");

count++;
h = h->next;
}

return (count);
}
