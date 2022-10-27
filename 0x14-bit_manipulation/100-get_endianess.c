#include "main.h"

/**
 * get_endianess - checks the endianess
 *
 * Return: 0, if big endian. 1, if little endian
 */

int get_endianess(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c)
}
