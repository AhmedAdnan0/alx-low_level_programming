#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of 2 nums
 * @argc: argument count
 * @argv: argument vaalue
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
