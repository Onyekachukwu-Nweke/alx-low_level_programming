#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer or NULL.
 */

char *_strdup(char *str)
{
	int i, size = 0;
	char *p;

	if (str == 0)
		return (NULL);

	while (str[size] != '\0')
		size++;

	/* +1 is because of null byte or end of string character */
	p = malloc((sizeof(*str) * size) + 1);

	if (p == 0)
		return (NULL);

	for (i = 0; i <= size; i++)
		p[i] = str[i];

	return (p);
}
