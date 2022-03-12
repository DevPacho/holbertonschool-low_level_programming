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
	int a, *p, size = max - min;

	if (min > max)
		return (NULL);

	p = malloc(size + 1 * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (a = 0; min <= max; min++)
		p[a] = min;
	a++;

	return (p);
}
