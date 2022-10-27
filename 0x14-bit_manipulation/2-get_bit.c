#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: number
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int valbit;

	if (index > 63)
	{
		return (-1);
	}

	valbit = (n >> index) & 1;

	return (valbit);
}
