#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: integer variable
 * @index: position of the bit
 * Return: 1 on success or -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * BYTE_LENGTH)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
