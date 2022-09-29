#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 *
 * @s: string to check
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
		return (0);
	return (length + _strlen_recursion(s + length));
}

/**
 * checkpal - check if string is palindrome or not
 * @str: string to check
 * @i: beginning of string
 * @j: end of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int checkpal(char *str, int i, int j)
{
	if (i >= j)
		return (1);
	if (str[i] != str[j])
		return (0);
	return (checkpal(str, i + 1, j - 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 *
 * @s: string
 *
 * Return: If string is a palindrome, 1. If not, return 0.
 */

int is_palindrome(char *s)
{
	int i = 0;

	i = _strlen_recursion(s) - 1;

	if (!*s)
		return (1);
	return (checkpal(s, 0, i));
}
