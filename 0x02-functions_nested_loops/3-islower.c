#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: 'Lower or higher'
 *
 * Return: 0 or 1
 */

int islower(int c)
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
