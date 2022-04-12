#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the lowercase alphabets
 *			folllowed by a new line.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	char c;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');

		i++;
	}
}
