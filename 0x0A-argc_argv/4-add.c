#include <stdio.h>
#include <stdlib.h>

/**
 * check - checks if all chars are digits
 * @x: string to be checked
 *
 * Return: 0 (all are digits)
 *         1 (otherwise)
 */

int check(char *x)
{
	int i = 0;

	if (x[0] == '-')
		++i;

	while (x[i] >= '0' && x[i] <= '9' && x[i] != '\0')
		++i;

	if (x[i] == '\0')
		return (0);

	return (1);
}
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
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; ++i)
	{
		sum = sum + atoi(argv[i]);

		if (check(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
