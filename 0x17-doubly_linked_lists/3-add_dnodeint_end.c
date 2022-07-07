#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that an
 * element at the end of a list
 *
 * @head: reference to the head pointer
 * @n: data
 *
 * Return: address of new element or NULL.
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (end_node == NULL)
	{
		free(end_node);
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;

	if ((*head) == NULL)
	{
		end_node->prev = NULL;
		(*head) = end_node;
		return (end_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = end_node;
	end_node->prev = last;

	return (end_node);
}
