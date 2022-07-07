#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that looks for
 * a node and returns
 *
 * @head: head pointer
 * @index: index of the list
 *
 * Return: node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (NULL);
	}

	return (current);
}
