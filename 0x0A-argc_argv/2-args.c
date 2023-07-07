#include <stdio.h>

/**
 * main - prints the argument passed to it
 * @argc: argument count
 * @argv: argument vaalue
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
