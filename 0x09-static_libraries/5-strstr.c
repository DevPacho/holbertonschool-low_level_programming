#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to compare and follow *s to
 * find similarity with a char in *f.
 * @needle: pointer to *f to find the first char equal to in *s.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;

	while (*haystack != '\0')
	{
		haystack = p1;
		p2 = needle;

		while (*p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (haystack);
		}
		p1 = haystack + 1;
	}
	return (NULL);
}
