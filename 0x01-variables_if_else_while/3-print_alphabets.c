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
	char lowerch = 'a';
	char upperch = 'A';
	char newupp;
	char newlow;

for (lowerch = 'a'; lowerch <= 'z'; lowerch++)
	{
	
		newlow = &lowerch;
	}
for (upperch = 'A'; upperch <= 'Z'; upperch++)
{
	newupp = $upperch;
}
	putchar("%c%c\n", newlow, newupp);
	return (0);
}
