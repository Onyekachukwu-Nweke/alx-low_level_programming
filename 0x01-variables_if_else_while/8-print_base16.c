#include <stdio.h>

/**
 * main - contains the main fuctional
 *	  block of the program
 *
 * Return: Always 0.
 */

int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	d = 'a';

	while (d <= 'f')
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);
}
