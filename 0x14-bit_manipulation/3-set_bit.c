#include "main.h"

/**
 * set_bit - set the value of bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: 1, on success. -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (_1);
	*n = ((1UL << index) | *n);
	return (1);
}
