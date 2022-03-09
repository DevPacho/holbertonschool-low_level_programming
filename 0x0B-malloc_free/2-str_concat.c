#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: char pointer s1.
 * @s2: char pointer s2.
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int a, b;
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

	for (a = 0; s1[a]; a++)
	{
		p[a] = s1[a];
	}

	for (b = 0; s2[b]; b++)
	{
		p[a] = s2[b];
		a++;
	}
	return (p);
}
