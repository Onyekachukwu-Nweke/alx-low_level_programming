#include "lists.h"
#include <stdio.h>

/**
 * *add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: pointer to pointer to the pointer of the first
 * element of the list.
 * @n: data to be inserted.
 * Return: address of new node or NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (head == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
