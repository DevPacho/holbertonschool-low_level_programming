#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @a: Pointer char a
 * Return: a
 */

char *cap_string(char *a)
{
	int b = 0;

	while (a[b])
	{
		while (!(a[b] >= 97 && a[b] <= 122))
			b++;

		if (a[b - 1] == ' ' ||
				a[b - 1] == '\t' ||
				a[b - 1] == '\n' ||
				a[b - 1] == ',' ||
				a[b - 1] == ';' ||
				a[b - 1] == '.' ||
				a[b - 1] == '!' ||
				a[b - 1] == '?' ||
				a[b - 1] == '"' ||
				a[b - 1] == '(' ||
				a[b - 1] == ')' ||
				a[b - 1] == '{' ||
				a[b - 1] == '}' ||
				b == 0)
			a[b] -= 32;

		b++;
	}

	return (a);
}
