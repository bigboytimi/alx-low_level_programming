#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a and b
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of the division
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of division of a by b
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a / b);
}
