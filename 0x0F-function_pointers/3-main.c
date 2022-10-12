#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: argument count]
 *
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char *oprt;

	oprt = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(oprt) == NULL || oprt[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	if ((*oprt == '/' && arg2 == 0) ||
			(*oprt == '%' && arg2 == 0))

	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(oprt))(arg1, arg2);
	printf("%d\n", result);

	return (0);
}
