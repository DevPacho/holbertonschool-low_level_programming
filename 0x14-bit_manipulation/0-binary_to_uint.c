#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: char pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1. NULL if failed.
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int savenum = 0;

	if (b == 0)
		return (0);

	for (a = 0; b[a]; a++)
		if (b[a] != 48 && b[a] != 49)
			return (0);

	for (a = 0; b[a]; a++)
	{
		savenum <<= 1;

		if (b[a] == '1')
			savenum += 1;
	}
	return (savenum);
}
