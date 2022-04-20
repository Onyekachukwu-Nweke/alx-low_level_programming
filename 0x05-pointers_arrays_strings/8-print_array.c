#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints elements in array
 * @a: array pointer variable
 * @n: number of elements in the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d ", *(a + i));
		}
		else
			printf("%d, ", *(a + i));
	}
	_putchar('\0');
}
