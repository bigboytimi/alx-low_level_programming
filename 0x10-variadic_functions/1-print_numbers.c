#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 *
 * @seperator: seperates each numbers
 *
 * @n: number of optional parameters
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);

		printf("%d", num);

		if (i < n - 1 && seperator != NULL)
		{
			printf("%s", *seperator);
		}

	}
	va_end(list);
	printf("\n");
}
