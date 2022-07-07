#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Function that returns the
 * number of node or elements in a list
 * @h: HEAD pointer
 *
 * Return: number of elements or 0
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num;
	const dlistint_t *temp = h;

	num = 0;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}

	return (num);
}
