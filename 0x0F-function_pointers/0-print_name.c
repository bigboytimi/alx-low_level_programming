#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @name: name to be printed
 *
 * @f: pointer to a function
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	int i, j;

	f = &print_name_as_is;

	for (i = 0; name[i] != '\0'; i++)
	{
		f[i] = name[i];
	}

	f = &print_name_uppercase;

	for (j = 0; name[j] != '\0'; j++)
	{
		f[j] = name[j];
	}

	return;
}	
