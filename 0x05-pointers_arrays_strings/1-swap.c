#include "main.h"

/**
 * swap_int - this function takes two pointer variables
 *	      and exchanges their values
 * @a: first pointer variable
 * @b: second pointer variable
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
