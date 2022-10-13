#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings followed by newline
 *
 * @separator: separates strings
 *
 * @n: number
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strargs;

	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		strargs = va_arg(string, char *);

		if (strargs == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strargs);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}




