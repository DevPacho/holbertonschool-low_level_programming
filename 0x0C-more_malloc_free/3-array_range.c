#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min value.
 * @max: max value.
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int a, *p, size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (a = 0; min <= max; min++, a++)
		p[a] = min;

	return (p);
}
