#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - function that returns a pointer to a
* 2 dimensional array of integers.
* @width: width of array.
* @height: height of array.
* Return: a pointer to a 2 dimensional array of integers or
* return NULL if width or height is 0 or negative.
*/
int **alloc_grid(int width, int height)
{
	int **array2;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	array2 = malloc(height * sizeof(int *));

	if (array2 == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array2[i] = malloc(width * sizeof(int));

		if (array2[i] == NULL)
		{
			while (i >= 0)
			{
				free(array2[i]);
				i--;
			}
			free(array2);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			array2[i][j] = 0;
	}
	return (array2);
}
