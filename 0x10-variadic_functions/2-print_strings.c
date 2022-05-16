#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string argument
 * @n: integer argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_s;
	unsigned int i;
	char *c;

	va_start(print_s, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(print_s, char *);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(print_s);
	putchar ('\n');
}
