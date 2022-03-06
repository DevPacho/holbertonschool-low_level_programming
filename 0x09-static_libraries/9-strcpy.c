#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - function that copies the string pointed to by src.
 * @dest: Pointer char dest
 * @src: Pointer char src
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a <= _strlen(src); a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
