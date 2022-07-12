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
	int i, a;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	a = 0;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}

	return (dest);
}
