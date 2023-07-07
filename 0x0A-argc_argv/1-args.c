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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
