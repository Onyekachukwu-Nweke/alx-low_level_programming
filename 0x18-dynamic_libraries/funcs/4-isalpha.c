#include "main.h"

/**
 *_isalpha - checks if the alphabet is lowercase
 *@c : character to check the case
 *
 *Return: 1 is lowercase or 0 is not lowercase
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
