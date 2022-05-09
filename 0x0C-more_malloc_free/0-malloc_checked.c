#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the initialized or 98 if code fails
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL || m == 0)
		exit(98);

	return (m);
}
