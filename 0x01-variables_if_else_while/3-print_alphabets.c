#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'prints alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	  putchar (ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}

	putchar('\n');

	return(0);
}

