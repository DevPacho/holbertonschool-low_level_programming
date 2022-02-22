#include "main.h"
#include <string.h>

/**
 * puts2- Prints every other character of a string (with first character)
 * @str: Pointer char str
 */

void puts2(char *str)
{
	int l = 0, a = 0;

	while (str[l] != '\0')
		l++;

	l -= 1;

	for (; a <= l; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
