#include "main.h"

/**
 * _islower - checks if the alphabet is lowercase
 * @c : character to check the case
 *
 * Return: 1 is lowercase or 0 is not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
