#include "main.h"
/**
 * print_line - print line
 * @c: placeholder for value
 * Return: Always 0.
 */
void print_line(int n)
{
	char c = '_';
	int i = 1;

	while (i <= n && n != 0)
	{
		_putchar(c);
		i++;
	}

	_putchar('\n');
}

