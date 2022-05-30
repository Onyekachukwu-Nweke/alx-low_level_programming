#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: integer variable
 * @index: position of the bits
 * Return: -1 on failure or 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * BYTE_LENGTH)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
