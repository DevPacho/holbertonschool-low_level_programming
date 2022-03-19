#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: amount of arguments.
 * Return: sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum = 0;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
