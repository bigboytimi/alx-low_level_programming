#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'print lowercase alphabets'
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = "a"; alphabet <= "z"; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}