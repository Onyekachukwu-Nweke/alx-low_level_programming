#include "main.h"

/**
 * print_line - prints lines
 * @n: int type dat states how long the
 *     line will be
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
