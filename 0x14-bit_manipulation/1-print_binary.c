#include "main.h"

/**
 * print_binary - prints the binary equivalent fo a decimal number
 *
 * @n: number to print in binary
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
