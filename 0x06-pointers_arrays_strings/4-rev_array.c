#include "main.h"

/**
 * reverse_array - reverse
 * @a: pointer to int params
 * @n: pointer to int params
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
		j--;
	}
}
