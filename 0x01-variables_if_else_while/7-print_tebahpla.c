#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'Alphabets in Reverse'
 *
 * Return: 0
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
