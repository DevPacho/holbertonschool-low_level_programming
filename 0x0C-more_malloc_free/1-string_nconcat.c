#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer string s1.
 * @s2: pointer string s2.
 * @n: unsigned int n size.
 * Return: pointer shall point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		;

	for (b = 0; s2[b]; b++)
		;

	p = malloc((a + b) * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	if (n >= b)
	{
		n = b;
	}
	else
	{
		for (a = 0; s1[a]; a++)
		{
			p[a] = s1[a];
		}

		for (b = 0; s2[b]; b++)
		{
			p[a] = s2[b];
			a++;
		}
	}
	return (p);
}
