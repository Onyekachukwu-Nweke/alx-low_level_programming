#include "main.h"

/**
 * *_memset - fills the memory with byte b
 * @s: char pointer
 * @b: byte b
 * @n: num of bytes
 * Return: pointer variable s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
