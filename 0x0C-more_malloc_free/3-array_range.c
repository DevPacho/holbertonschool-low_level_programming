#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 * @min: 
 * @max:
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int a, *p, size;

	if (min > max)
		return (NULL);

	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		p[a] = 
	
	return (p);
}
