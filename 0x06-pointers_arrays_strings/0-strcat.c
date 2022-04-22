#include "main.h"

/**
 * *_strcat - this function concatenates string
 * @dest: pointer destination
 * @src: pointer source
 * Return: dest.
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, a = 0;

	for (i = 0; dest[i] != '\n'; i++)
		;

	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\n');

	return (dest);
}
