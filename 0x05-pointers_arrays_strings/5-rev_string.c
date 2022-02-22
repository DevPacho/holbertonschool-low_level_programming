#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string.
 * @s: Pointer char s.
 */

void rev_string(char *s)
{
	int a, l, t;

	l =  strlen(s);

	for (a = 0; a < l / 2; a++)
	{
		t = s[a];
		s[a] = s[l - a - 1];
		s[l - a - 1] = t;
	}
}
