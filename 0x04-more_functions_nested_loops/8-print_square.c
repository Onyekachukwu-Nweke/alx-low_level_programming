#include "main.h"

/**
 *print_square - prints #
 *@size: det. how many # to be printed
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i = 0, j;

		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
