#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @a: Pointer char a
 * Return: a
 */

char *leet(char *a)
{
	int b, c;

	char words[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (b = 0; a[b]; b++)
	{
		for (c = 0; words[c]; c++)
		{
			if (a[b] == words[c])
				a[b] = numbers[c];
		}
	}
	return (a);
}
