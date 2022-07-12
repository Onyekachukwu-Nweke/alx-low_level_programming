#include "main.h"

/**
 * *_memcpy - copies memory
 * @dest: string pointer
 * @src: string pointerd
 * @n: num of bytes
 * Return: string pointer dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
