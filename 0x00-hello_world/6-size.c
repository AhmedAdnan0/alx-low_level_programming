#include <stdio.h>

/**
 * main - prints the required line
 * Return: 0 (at the end)
 */

int main(void)
{
	
	char charVar;
	int intVar;
	long int longIntVar;
	long long int longLongIntVar;
	float floatVar;

	printf("Size of a char: %ld byte(s)\n", sizeof(charVar));
	printf("Size of an int: %ld byte(s)\n", sizeof(intVar));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntVar));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntVar));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatVar));

	return (0);
}
