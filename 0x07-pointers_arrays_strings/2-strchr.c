#include "main.h"
#include "stdio.h"

/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to be found
 * Return: if positive, return found. if negative, return 0.
 */

char *_strchr(char *s, char c)
{
	while(*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else if(!c)
		{
			return (s);
		}
		s++;
	}

	return ('\0');
}
