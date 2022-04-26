#include "main.h"

/**
 * *_strchr - searches for a string
 * @s: string pointer variable
 * @c: character to be searched
 * Return: character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
