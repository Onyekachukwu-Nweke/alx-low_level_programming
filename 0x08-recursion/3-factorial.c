#include "main.h"

/**
 * factorial - finds a factorial of a number
 * @n: integer type
 * Return: factorial, 1 or -1.
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
