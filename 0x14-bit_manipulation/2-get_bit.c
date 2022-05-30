#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer
 * @index: position of the bit
 * Return: bit index value or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * BYTE_LENGTH)
		return (-1);
	return ((n >> index) & 1);
}
