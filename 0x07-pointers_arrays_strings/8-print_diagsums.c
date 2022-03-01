#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer int a.
 * @size: pointer int of size
 */

void print_diagsums(int *a, int size)
{
	int b;
	int s1 = 0, s2 = 0;

	for (b = 0; b < size * size; b++)
	{
		if (b % (size + 1) == 0)
			s1 += a[b];

		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
			s2 += a[b];
	}
	printf("%d, %d\n", s1, s2);
}
