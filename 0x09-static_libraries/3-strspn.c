#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: Pointer char s
 * @accept: Pointer char accept
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
		if (s[a] != accept[b])
		{
			return (c);
		}
	}
	return (c);
}
