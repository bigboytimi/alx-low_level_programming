#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: pointer to str
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
