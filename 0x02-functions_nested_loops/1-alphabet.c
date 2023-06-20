#include "main.h"

/**
 * main - prints alphabe in lower case
 * Return: 0 in success
 */

int main(void)
{
	char letter = "a";
	while (letter != "z")
	{
		_putchar(letter);
	}
	_putchar("\n");
	return(0);
}
