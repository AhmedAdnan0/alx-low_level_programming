#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: pointer to the name
 * @f: pointer to the used function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
