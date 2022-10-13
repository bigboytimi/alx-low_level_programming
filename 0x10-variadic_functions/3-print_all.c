#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Functions to print anything
 * @format: List of all types of args
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *s;

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(list);
}
