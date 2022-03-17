#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array of numbers.
 * @size: size of array.
 * @action: function int pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
		action(array[a]);
}
