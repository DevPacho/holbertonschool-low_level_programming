#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: Pointer int a
 * @n: Parameter n
 */

void reverse_array(int *a, int n)
{
	int *p = a;
	int b = 0;
	int tmp;

	n--;
	while (b < n)
	{
		tmp = *(p + n);
		*(p + b) = *(p + n);
		*(p + n) = tmp;
		b++;
		n--;
	}
}
