#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_change - create an array of integers
 *
 * @min: minimum number
 *
 * @max: maximum number
 *
 * Return: NULL, if min is greater than max and if malloc fails
 *         Pointer, on success
 */

int *array_range(int min, int max)
{
	int *arrint;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arrint = malloc(sizeof(int) * size);

	if (arrint == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arrint[i] = min++;

	return (arrint);
}
