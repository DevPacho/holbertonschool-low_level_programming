#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c: contents of the array.
 * Return: NULL if size = 0, a pointer to the array,
 * or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == 0)
		return (NULL);

	for (a = 0; a < size; a++)
		*(p + a) = c;

	return (p);
}
