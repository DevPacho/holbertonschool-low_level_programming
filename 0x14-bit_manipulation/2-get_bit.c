#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integers.
 * @index: is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a = 0;

	for (; a < index; a++)
		n >>= 1;

	if (a > (sizeof(unsigned long int) * 8))
		return (-1);
	return (n & 1);
}
