#include <stdlib.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of the intended array
 *
 * @c: character
 *
 * Return: if size is NULL, return 0. if not, return pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
		free(s);
	}

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
