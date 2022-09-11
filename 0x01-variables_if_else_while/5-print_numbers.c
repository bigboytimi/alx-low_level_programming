#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'Print all base 10 numbers'
 *
 * Return: 0
 */

int main(void)
{
	int b10 = 0;

	while (b10 < 10)
	{
		printf ("%d", b10);
			b10++;
	}
	putchar('\n');
	return (0);
}
