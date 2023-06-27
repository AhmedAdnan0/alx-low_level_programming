#include "main.h"

/**
* _strlen - returns string length
* @s: string to be checked
*
* Return: string length
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		++i;
	}
	return (i);
}

/**
 * print_rev - prints string of chars in reverse
 * @str : string to be printed
 */

void print_rev(char *str)
{
	int i;

	for (i = _strlen(str); i >= 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
