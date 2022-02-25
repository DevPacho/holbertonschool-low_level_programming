#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: Pointer char s1
 * @s2: Pointer char s2
 * Return: Comparison of strings with a subtraction (difference)
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] && s2[a] && s1[a] == s2[a]; a++)
	{}
	return (s1[a] - s2[a]);
}
