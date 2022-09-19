#include "main.h"
/**
 * swap_int - swap values of two integers
 *
 * @a: pointer to variable a
 *
 * @b: pointer to variable b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	if (*a != *b)
	{
		*a = *b;
		*b = swap;
	}

}
