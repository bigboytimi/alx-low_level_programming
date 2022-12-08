#include "main.h"
/**
 * _puts - prints a string
 *
 * @s: pointer to s
 *
 * Return: 0
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

}
