#include "main.h"
/**
 * print_sign - Entry point
 *
 * Description: 'print signs'
 *
 * @n: the recieved integer value
 *
 * Return: 1 is true, 0 is false
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar("+");
	}
	else if (n < 0)
	{
		return (-1);
		_putchar("-");
	}
	else
	{
		return (0);
		_putchar("0");
	}
}
