#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: of array
* @height: of array
* Return: array or NULL
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(height * sizeof(int *)); /**reservo memoria para las filas*/
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int)); /**reservo mem para las columnas*/
		if (array[i] == NULL)
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
