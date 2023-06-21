#include <stdio.h>

/**
 * main - prints the sum of natural nums from 0 to 1024
 *        that multiples of 3 or 5
 * Return: 0 (success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
