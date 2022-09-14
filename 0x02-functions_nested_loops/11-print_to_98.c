#include "main.h"
#include <stdio.h>
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
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	}
		else if (n >= 98)
		{
			while (n >= 98);
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
		else {
			_putchar(n + '0');
		}
}

