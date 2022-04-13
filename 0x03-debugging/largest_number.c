#include "main.h"

/**
 * largest_number - Is the function used to check largest integer
 * @a : first integer
 * @b : second integer
 * @c : third integer
 *
 * Return: returns largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
