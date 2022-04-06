#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: entering unsigned integers.
 * @m: entering unsigned integers.
 * Return: the number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int toflip = 0;
	int a, b;

	while (n > 0 || m > 0)
	{
		a = (n & 1);
		b = (m & 1);

		if (a != b)
			toflip++;

		n >>= 1;
		m >>= 1;
	}

	return (toflip);
}
