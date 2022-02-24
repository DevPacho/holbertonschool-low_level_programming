#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: Pointer char dest
 * @src: Pointer char src
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a]; a++)
	{}

	for (b = 0; src[b]; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
