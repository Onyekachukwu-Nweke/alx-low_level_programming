#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * _strlen - counts number of characters in a string
 * @s: char pointer variable
 */

void print_rev(char *s)
{
	int i, c;

	c = 0;
	while (s[c])
		c++;

	for (i = c; i <= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
