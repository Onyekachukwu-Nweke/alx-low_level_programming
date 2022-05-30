#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_endianness - check for endianness
 * Return: 0-big endian or 1-little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *endian = (char *) & i;

	if (*endian == 1)
		return (1);

	return (0);
}
