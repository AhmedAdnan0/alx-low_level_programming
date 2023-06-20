#include <unistd.h>

/**
 * main - prints "_putchar"
 * return: 1 in success
 */

int main (void)
{
	char fun[] = "_putchar";
	write(1, fun, 1);
	putchar("/n");
	return (0);
}
