#include "main.h"

/**
 * _isdigit - check if the number is a digit
 * @c : integer type
 * Return: 0 or 1.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
