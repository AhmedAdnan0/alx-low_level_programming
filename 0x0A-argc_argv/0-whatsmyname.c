#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
