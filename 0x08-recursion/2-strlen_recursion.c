#include "main.h"

/**
 * _strlen_recursion - find the length of a string
 *
 * @s: string
 *
 * Return: counter
 */

int _strlen_recursion(char *s)
{
	int counter;

	counter = 1;

	if (*s == '\0')
	{
		return (0);

	}

	return (counter + _strlen_recursion(s + counter));
}
