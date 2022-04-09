#include <stdio.h>

/**
 * main - contains the main block of the program
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		putchar (48 + a);
		a++;
	}

	putchar('\n');

	return (0);
}
