#nclude "main.h"

/**
 * main - prints "_putchar"
 * Return: 1 in success
 */

int main(void)
{
	char fun[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(fun[i]);
	}
	_putchar('\n');
	return (0);
}
