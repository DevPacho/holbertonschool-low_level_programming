#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 * @ptr: is a pointer to the memory previously allocated.
 * Return: pointer or NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (old_size == new_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
