#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: parameter indicating number of optional parameters passed
 *
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i, sum = 0;

	va_list list;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
