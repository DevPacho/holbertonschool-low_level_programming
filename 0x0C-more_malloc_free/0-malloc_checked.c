#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: parameter int b.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	if (b == 0)
		return (NULL);

	p = malloc(b * sizeof(char));

	if (p == NULL)
		exit(98);

	return (p);
}
