#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: Pointer int s
 * Return: a
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
