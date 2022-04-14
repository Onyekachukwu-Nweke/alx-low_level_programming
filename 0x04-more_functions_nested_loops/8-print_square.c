#include "main.h"

/**
 *print_squares - prints #
 *@size: det. how many # to be printed
 */

void print_squares(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
