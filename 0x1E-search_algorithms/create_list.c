#include <stdlib.h>
#include "search_algos.h"

/**
	* create_list - Creates a singly linked list from an array of integers.
	* @array: Pointer to the first element of the array.
	* @size: Number of elements in the array.
	*
	* Return: Pointer to the head of the linked list.
	*/
listint_t *create_list(int *array, size_t size)
{
	listint_t *head = NULL, *node = NULL, *prev = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
	node = malloc(sizeof(listint_t));
	if (!node)
	return (NULL);
	node->n = array[i];
	node->index = i;
	node->next = NULL;
	if (!head)
	head = node;
	if (prev)
	prev->next = node;
	prev = node;
	}

	return (head);
}
