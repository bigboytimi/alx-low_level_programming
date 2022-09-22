#include "main.h"

/**
 * string_toupper - changer lowercase to uppercase
 *
 * @str: string
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] == '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
}
