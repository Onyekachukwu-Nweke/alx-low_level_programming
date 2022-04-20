#include "main.h"

/**
 * _strlen - counts the amount of characters in a string
 * @s: string argument
 * Return: i number of characters
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
