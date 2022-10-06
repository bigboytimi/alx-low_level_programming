#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: integer variable
 *
 * Return: On success, pointer to allocated space.
 */

void *malloc_checked(unsigned int b)
{
	int *newmem;

	newmem = malloc(sizeof(b));

	if (newmem < 0)
	{
		exit(98);
	}
	return (newmem);
}
