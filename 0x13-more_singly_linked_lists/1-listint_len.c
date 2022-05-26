#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: pointer to struct listint_t
 * Return: node_counter or 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		h = h->next;
		node_counter++;
	}

	return (node_counter);
}
