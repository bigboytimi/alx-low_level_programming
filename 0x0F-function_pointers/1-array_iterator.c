#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer given as a parameter
 * on elements of array
 *
 * @array: array of integer elements
 *
 * @size: size of array
 *
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
