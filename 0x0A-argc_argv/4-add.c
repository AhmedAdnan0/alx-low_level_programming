#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addation of all input nums
 * @argc: argument count
 * @argv: argument vaalue
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; ++i)
	{
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
