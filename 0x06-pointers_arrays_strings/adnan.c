#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "abcd4";
	char b[] = "abcd1";

	printf("%d\n", strcmp(a, b));

	return (0);
}
