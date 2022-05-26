#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the
 * elements of a listint_t list
 * @h: pointer to struct listint_t
 * Return: node_counter or NULL.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_counter++;
	}

	return (node_counter);
}
