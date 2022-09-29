#include "main.h"

/**
 * prime - confirm a prime number
 *
 * @num: number
 *
 * @div: divisible
 *
 * Return: 1, if a prime number, 0 if not a prime number
 */

int prime(int num, int div)
{
	if (div < num)
	{
		if (num % div == 0)
			return (0);
		else
			return (prime(num, div + 1));
	}
	else
		return (1);
}

/**
 * is_prime_number - check for prime number
 *
 * @n: placeholder for n
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, 2));
}
