#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of numbers.
 * @size: size of array.
 * @cmp: function int pointer.
 * Return: the index of the first element for which the cmp function.
 * if no element matches, return -1, If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
		cmp(array[a]);

	return (a);
}
