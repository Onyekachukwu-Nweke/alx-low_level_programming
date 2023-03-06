#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function that add an
 * element at the beginning of the list
 *
 * @head: reference to head pointer
 * @n: data
 *
 * Return: address of new node or NULL.
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (*head);
}
