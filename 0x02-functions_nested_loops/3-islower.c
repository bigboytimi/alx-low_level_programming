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

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		
		return (0);
	
	}
}
