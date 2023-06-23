#include <stdio.h>

/**
 * positive_or_negative -main  print whether the number is positive or negative
 * @i: int to be checked
 */

void positive_or_negative(int i)
{

	if (i < 0)
	{
		printf("%d is negative\n",  i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
