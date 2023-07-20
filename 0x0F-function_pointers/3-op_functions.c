#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add 2 ints
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract 2 ints
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul 2 ints
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 ints
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - reminder of division of int a by int b
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

