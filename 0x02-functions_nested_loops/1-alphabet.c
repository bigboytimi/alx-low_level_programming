#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'print lowercase alphabets'
 *
 * Return: 0 (Always zero)
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
