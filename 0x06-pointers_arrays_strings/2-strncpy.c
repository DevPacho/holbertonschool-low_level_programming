#include "main.h"

/**
 * _strncpy - Function that copies a string.
 * @dest: Pointer char dest
 * @src: Pointer char src
 * @n: Parameter n
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for ( ; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
