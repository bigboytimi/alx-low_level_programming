#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: *dest
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int cmp;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}

	cmp = s1[i] - s2[i];

	return (cmp);
}
