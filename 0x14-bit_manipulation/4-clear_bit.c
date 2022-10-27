#include main.h

/**
 * clear_bit - set the value of a bit to 0
 *
 * @n: number
 *
 * @index: index
 *
 * Return: 1 if success. -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
