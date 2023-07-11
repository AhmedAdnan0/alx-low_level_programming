#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate 2D array of 0s
 * @width: array width
 * @height: array height
 *
 * Return: ptr to the array (Success)
 *         NULL (Failed)
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (; i >= 0; --i)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; ++i)
		for (j = 0; j < width; ++j)
			ptr[i][j] = 0;

	return (ptr);
}
