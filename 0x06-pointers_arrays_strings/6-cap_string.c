#include "main.h"
/**
 * cap_string - capitalize words of a string
 *
 * @str: string
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i, j;
	char seperators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}

			for (j = 0; seperators[j] != '\0'; j++)

				if (str[i] == seperators[j] && str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] = str[i + 1] - 32;
	
	}
	return (str);
}
