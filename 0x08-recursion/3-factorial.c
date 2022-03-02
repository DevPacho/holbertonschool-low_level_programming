#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: incoming parameter
 * Return: the factorial of a given number.
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
