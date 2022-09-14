#include "main.h"
/**
 * _abs - Entry point
 *
 * Description: 'compute the absolute value of an integer'
 *
 * int: data type to be recieved
 *
 * Return 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return(n);
	}
	else if (n < 0)
	{
		return(-n);
	}
	else
       	{
		return (n);
	}
}
