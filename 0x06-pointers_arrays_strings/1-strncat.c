#include "main.h"

/**
 * *_strncat - concatenates a string of n bytes
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: *dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
