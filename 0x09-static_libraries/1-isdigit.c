#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 * @c: placeholder for value
 * Return: 1 is digit, 0 is otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}