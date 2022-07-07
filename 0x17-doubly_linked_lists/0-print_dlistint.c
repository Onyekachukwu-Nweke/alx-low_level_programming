#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - prints all the node in
 * a doubly linked list
 * @h: head pointer
 *
 * Return: number of nodes in the list or NULL.
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num;
	const dlistint_t *tmp = h;

	if (tmp == NULL)
		return (0);

	num = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		num++;
		tmp = tmp->next;
	}

	return (num);
}
