#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string pointer
 * @n: positive integer argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, const unsigned int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(print);
	putchar ('\n');
}
