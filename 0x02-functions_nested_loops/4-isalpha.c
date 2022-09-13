#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: 'check for alphabetic character'
 *
 * @c: integer value to be returned
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	int low = 'a';
        int up = 'A';

	while (low <= 'z' && up <= 'Z')
	{
		if (low == c || up == c)
		{
			return (1);
		}
		return (0);
		low++;
		up++;
	}
}
