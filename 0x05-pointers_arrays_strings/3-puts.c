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
 * _puts - prints string of chars
 * @str : string to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
