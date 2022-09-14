#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Description: 'print last digit of a number'
 *
 * @n: placeholder for value
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);

}
