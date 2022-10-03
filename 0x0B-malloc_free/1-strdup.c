#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a duplicated string
 *
 * @str: string
 *
 * Return: 0, if str is NULL. pointer, if valid
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;

	/* check if str contains a value */
	if (*str == 0)
	{
		return (0);
	}
	/* get size of the str */
	while (str[i] != '\0')
	i++;

	/* allocate memory and assign it to pointer s */
	s = malloc(sizeof(char) * i - 1);

	if (*s == 0)
	{
		return (0);
	}

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
