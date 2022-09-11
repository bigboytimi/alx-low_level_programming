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
	int baseten = 0; 

	while (baseten < 10)
	{
		putchar (baseten);
	}
	putchar('\n');
	return (0);
}
