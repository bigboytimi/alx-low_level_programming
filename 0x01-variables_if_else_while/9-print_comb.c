#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'print single-digit seperated by commas'
 *
 * Return: 0
 */
int main(void)
{
	int sdnum;

	for (sdnum = '0'; sdnum <= '9'; sdnum++)
	{
		putchar(sdnum);

		if (sdnum != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
