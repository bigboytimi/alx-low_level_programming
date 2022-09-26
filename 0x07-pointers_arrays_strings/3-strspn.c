#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: confirmation string
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter;

	counter = 0;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			j = 0;
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					counter++;
				}
				j++;
			}
		}
		else
		{
			return (counter);
		}
		i++;
	}
	return (counter);
}
