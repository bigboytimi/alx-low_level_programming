#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (n > i)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	n--;
	return (dest);
}
