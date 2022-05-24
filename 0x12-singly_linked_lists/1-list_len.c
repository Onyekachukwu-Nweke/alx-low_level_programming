#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints the number of elements in a list
 * @h: struct pointer
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
