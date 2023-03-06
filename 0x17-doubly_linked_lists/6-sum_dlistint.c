#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - functions that sums
 * all the elememts in the list
 *
 * @head: head pointer
 *
 * Return: sum of elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
