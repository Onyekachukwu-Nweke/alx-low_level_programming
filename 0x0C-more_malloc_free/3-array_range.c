#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: first integer
 * @max: second integer
 * Return: pointer array
 */

int *array_range(int min, int max)
{
	int i;
	int *m;

	if (min > max)
		return (NULL);

	m = malloc(((max - min) + 1) * sizeof(int));

	if (m == 0)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		m[i] = min + i;

	return (m);
}
