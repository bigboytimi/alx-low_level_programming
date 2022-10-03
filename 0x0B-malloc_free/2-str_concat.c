#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: NULL, on failure. return pointer, on success
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1, size2;
	char *finalstring;

	i = 0;
	j = 0;
	size1 = 0;
	size2 = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	finalstring = malloc(sizeof(char) * size1 + size2 + 1);

	if (finalstring == NULL)
		return (NULL);

	while (i < size1)
	{
		finalstring[i] = s1[i];
		i++;
	}

	while (j < size2)
	{
		finalstring[i] = s2[j];
		i++, j++;
	}
	finalstring[i] = '\0';
	return (finalstring);
}
