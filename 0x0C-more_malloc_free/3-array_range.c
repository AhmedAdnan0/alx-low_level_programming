#include <stdlib.h>
#include "main.h"

/**
* array_range - generate array of ints from min to max
* @min: min value
* @max: max value
*
* Return: ptr to array
*         NULL (Failed)
*/

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; ++i)
		ptr[i] = min + i;

	return (ptr);
}
