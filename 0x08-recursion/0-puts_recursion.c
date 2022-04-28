#include "main.h"

/**
 * _puts_recursion - prints strings in a recursive manner
 * @s: string pointer
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
