#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'print lowercase alphabet 10x'
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char times, alphabet;

	for (times = 1; times <=10; times++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		
	}

}
