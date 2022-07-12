#include "main.h"

/**
 * _puts - function that prints out strings
 * @str: string argument to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
