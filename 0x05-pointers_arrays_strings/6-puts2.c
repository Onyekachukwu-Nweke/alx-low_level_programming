#include "main.h"

/**
 * puts2 - prints every other character starting from
 *	   the first character
 * @str: string pointer variable
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] = '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++
	}
	_putchar('\n');
}
