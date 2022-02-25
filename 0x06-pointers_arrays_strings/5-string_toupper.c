#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @dest: Pointer char dest
 * Return: dest
 */

char *string_toupper(char *dest)
{
	int a;

	for (a = 0; dest[a]; a++)
	{
		if (dest[a] >= 97 && dest[a] <= 122)
		{
			dest[a] = dest[a] - 32;
		}
	}
	return (dest);
}
