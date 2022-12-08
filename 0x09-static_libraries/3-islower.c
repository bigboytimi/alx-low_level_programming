#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: 'Lower or higher'
 *
 * @c: the integer value it recieves
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
