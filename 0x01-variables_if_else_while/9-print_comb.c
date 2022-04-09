#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains the main block
 *
 * Return: Always 0.
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');

	return (0);
}
