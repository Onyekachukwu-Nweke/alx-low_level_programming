#include "main.h"

/**
 * *_strncpy - copies string from source to destination
 * @dest: char pointer destination
 * @src: char pointer source
 * @n: number of bytes to be copied
 * Return: pointer destination after function
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
