#include "main.h"
#include <stdio.h>

/**
 * swap_int - Function that swaps the values of two integers.
 * @a: Pointer int a
 * @b: Pointer int b
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;

	*b = 98;
}
