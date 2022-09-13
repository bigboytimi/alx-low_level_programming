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
	int i;
	i = 'a';

	while (i <= 'z')
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}

		i++;
	}
}
