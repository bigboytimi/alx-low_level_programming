#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: integer representing bytes
 *
 * Return: pointer to concatenated string on sucess
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcon;

	unsigned int s1len, s2len, i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;

	strcon = malloc(sizeof(char) * (s1len + 1));

	if (strcon == NULL)
		return (NULL);

	s1len = 0;
	
	j = 0;
	while (s1[j])
	{
		strcon[s1len++] = s1[j];
		j++;
	}

	k = 0;
	while (s2[k] && k < n)
	{
		strcon[s1len++] = s2[k];
		k++;
	}
	strcon[j] = '\0';
	return (strcon);
}
