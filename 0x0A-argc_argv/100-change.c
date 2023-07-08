#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimal coins needed
 * @argc: argument count
 * @argv: argument vaalue
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x, c = 0, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; )
	{
		while (x - coins[i] >= 0)
		{
			++c;
			x = x - coins[i];
		}
		++i;
	}
	printf("%d\n", c);
	return (0);
}
