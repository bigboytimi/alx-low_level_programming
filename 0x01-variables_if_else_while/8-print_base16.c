#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'Print base 16 numbers'
 *
 * Return: 0
 */
int main(void)
{
	char b16 = '0';
	char nu;

	while (b16 <= '9')
	{
		putchar(b16);
		b16++;
	}
	for (nu = 'a'; nu <= 'f'; nu++)
	{
		putchar(nu);
	}
	putchar('\n');
	return (0);
}
