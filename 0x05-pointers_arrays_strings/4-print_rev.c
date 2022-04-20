#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * _strlen - counts number of characters in a string
 * @s: char pointer variable
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
