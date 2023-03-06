#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a
 * linked list
 *
 * @head: head pointer
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
