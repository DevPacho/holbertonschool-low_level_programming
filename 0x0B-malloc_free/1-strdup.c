#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: parameter char str.
 * Return: a pointer to a new string which is a duplicate
 * of the string str.
 */

char *_strdup(char *str)
{
	int a, b;
	char *p;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		;
	a++;

	p = malloc(a * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
	{
		p[b] = str[b];
	}
	return (p);
}
