#include "lists.h"
#include <stdio.h>

/**
 * *add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 * @head: pointer to pointer to the first element of
 * the array
 * @n: data to be inserted
 * Return: address of new node or NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	last = *head;

	if (new_node == NULL)
	{
		free(new_node);
		free(last);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
