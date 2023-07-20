#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculator function
 * @argc: no. of arguments
 * @argv: arguments
 *
 * Return: (0) SUCCESS
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*s)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = get_op_func(argv[2]);

	if (s == 0)
	{
		printf("Error\n");
		exit(99);
	}
	result = s(a, b);
	printf("%d\n", result);

	return (0);
}
