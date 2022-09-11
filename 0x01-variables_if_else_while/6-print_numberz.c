#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'Print base10 with putchar'
 *
 * Return: (0);
 */
int main(void)
{
	int b10;

	for (b10 = 0; b10 < 10; b10++)
	{
		putchar(b10 + '0');
	}
	putchar('\n');
	return (0);
}
