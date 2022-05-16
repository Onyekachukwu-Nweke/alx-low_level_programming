#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: arguments
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sp;
	unsigned int i, sum = 0;

	va_start(sp, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(sp, const unsigned int);
	}

	va_end(sp);
	return (sum);
}
