#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 *
 * Description: 'print all natural numbers'
 *
 * @n: placeholder for value
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else if (n >= 98)
	{
		while (n >= 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
       	{
		printf("%d, ", n);
		printf("%d\n", n);
	}
}

