#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_int - prints integers
 * @list: va_list argument to be printed
 */

void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - prints floats
 * @list: va_list argument to be printed
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - prints characters
 * @list: va_list argument to be printed
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_string - prints strings
 * @list: va_list argument to be printed
 */

void print_string(va_list list)
{
	char *s = va_arg(list, char *);

	s != NULL ? printf("%s", s) : printf("(nil)");
}

/**
 * print_all - function that prints anything
 * @format: argument to be printed
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j;
	char *sep = "";

	PrintTypeStruct printType[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", sep);
				printType[j].printer(list);
				sep = ", ";
				break;
			}
			j++;
		}

		i++;
	}

	printf("\n");
	va_end(list);
}
