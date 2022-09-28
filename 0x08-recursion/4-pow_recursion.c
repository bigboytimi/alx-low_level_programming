#include "main.h"

/**
 * _pow_recursion - return the value of x raised to power y
 *
 * @x: argument
 *
 * @y: argument
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	/* base case */
	if (y < 0)
	{
		return (-1);
	}
	if (x == 0 || y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
