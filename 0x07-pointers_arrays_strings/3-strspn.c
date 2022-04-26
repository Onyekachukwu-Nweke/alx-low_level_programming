#include "main .h"

/**
 * *_strspn - return the number of occurent of a string
 * @s: string to check
 * @accept: character to match
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, cmp = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cmp++;
				break;
			}
			if (accept == '\0')
			{
				break;
			}
		}
	}

	return (cmp);
}
