#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 *
 * @ac: argument count
 *
 * @av: argument vector
 *
 * Return: NULL, if av and ac is 0
 */

char *argstostr(int ac, char **av)
{
	char *concatstr;
	int arg, byte, i, size;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	concatstr = malloc(sizeof(char) * size + 1);

	if (concatstr == NULL)
	{
		return (NULL);
	}

	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			concatstr[i++] = av[arg][byte];

		concatstr[i++] = '\n';
	}
	concatstr[size] = '\0';
	return (concatstr);
}





