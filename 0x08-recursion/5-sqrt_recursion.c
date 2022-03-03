#include "main.h"

/**
 * aux_sqrt - Auxiliary function that will do
 * the process of finding the square root.
 * @n: number to which the square root is to be found.
 * @r: square root of n.
 * Return: First the square root and then call the function
 * to go to the next number to evaluate in case it has not yet found
 * the exact square root. Return -1 if it has no exact square root.
 */

int aux_sqrt(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (-1);
	return (aux_sqrt(n, 1 + r));
}

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number.
 * @n: incoming parameter n
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (aux_sqrt(n, 1));
}
