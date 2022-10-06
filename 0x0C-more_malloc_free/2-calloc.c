#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for array
 *
 * @nmemb: number of elements
 *
 * @size: the size of bytes
 *
 * Return: NULL, on failure. Pointer, on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrmem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrmem = malloc(nmemb * size);

	if (arrmem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		arrmem[i] = 0;
	}

	return (arrmem);
}
