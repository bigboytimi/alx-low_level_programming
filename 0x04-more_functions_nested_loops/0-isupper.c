#include "main.h"
/**
 * _isupper - writes a function that checks for uppercase character
 * @c : placeholder for received value
 * Return: 1 is uppercase. 0 is otherwise
 */

int _isupper(int c)
{
	char upper = 'A';

	while (upper <= 'Z')
	{
		if (c == upper)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		upper++;
	}
	return (0);
}
