#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'Print alphabets except q and e'
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if(ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
		return (0);
}

