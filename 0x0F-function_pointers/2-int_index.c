#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integers
 *
 * @size: size of array
 *
 * @cmp: pointer to function
 *
 * Return: -1, if function fails. Return index, on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] == 0))
		{
			return (-1);
		}
		else
		{
			return (i);
		}
	}
}
