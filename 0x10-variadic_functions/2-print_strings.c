#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;
	char *ps;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		ps = va_arg(args, char *);

		if (a > 0 && separator != NULL)
			printf("%s", separator);

		if (ps == NULL)
			printf("(nil)");

		else
			printf("%s", ps);
	}

	printf("\n");
	va_end(args);
}
