#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: Pointer char s.
 * @c: character to find.
 * Return: Pointer char s or NULL depending on whether it finds the character
 * or not.
 */

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s != c)
		return (NULL);
	return (s);
}
