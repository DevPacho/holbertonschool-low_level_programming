#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string (inreverse) followed by a new line
 * @s: Pointer char s
 */

void print_rev(char *s)
{
	int a;

	for (a = (strlen(s) - 1); a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
