#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checker - function that allocates memory using malloc.
 * @b: parameter int b.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	if (b == 0)
		return (NULL);

	p = malloc(b * sizeof(char));

	if (p == NULL)
		exit (98);

	return (p);
}
