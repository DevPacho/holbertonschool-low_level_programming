#include "search_algos.h"

/**
* binary_search - function that searches for a value in a
* sorted array of integers using the 'Binary search algorithm'.
*
* @array: is a pointer to the first element of the array to search in.
* @size: is the number of elements in the array.
* @value: is the value to search for.
*
* Return: iterator with the value or -1 on failure.
*/

int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0, half = 0, right = size - 1, position = 0;

	if (!array || !value)
		return (-1);

	while (left <= right)
	{
		position = left;

		printf("Searching in array: ");
		while (position < right)
		{
			printf("%d, ", array[position]);
			position++;
		}
		printf("%d\n", array[position]);

		half = (left + right) / 2;

		if (array[half] < value)
			left = half + 1;

		else if (array[half] > value)
			right = half - 1;

		else
			return (half);
	}

	return (-1);
}
