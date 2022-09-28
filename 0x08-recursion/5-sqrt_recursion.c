#include "main.h"

/**
 * mysqrt - find natural square root
 *
 * @num: argument
 *
 * @root: root
 *
 * Return: integer
 */

int mysqrt(int num, int root)
{
	if (root * root == num)
		return (root);

	if (num / 2 == root)
		return (-1);

	return (mysqrt(num, root + 1));
}

/**
 * _sqrt_recursion - find natural square root
 *
 * @n: argument for number
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (mysqrt(n, r));
}
