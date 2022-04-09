#include <stdio.h>

/**
 * main - contains the fuctional block
 *	  of the program
 *
 * Return: Always 0.
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}

	putchar('\n');

	return (0);
}
