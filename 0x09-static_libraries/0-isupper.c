#include "main.h"
/**
 * _isupper - writes a function that checks for uppercase character
 * @c : placeholder for received value
 * Return: 1 is uppercase. 0 is otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
