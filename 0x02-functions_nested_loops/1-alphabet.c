#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'print lowercase alphabets'
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
