#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: value of byte to be filled
 * @n: number of bytes to be filled in the memory area
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
