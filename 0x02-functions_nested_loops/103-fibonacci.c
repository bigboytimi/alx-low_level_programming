#include <stdio.h>
/*
 * main - Entry point
 *
 * Description : 'fibonacci sequence'
 *
 * Return: 0
 */
int main(void)
{
	float count;
	unsigned long fib1 = 0, fib2 = 1, fibsum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			count += fibsum;

		fib1 = fib2;
		fib2 = fibsum;

	}
	printf("%.0f\n", count);

	return (0);
}
