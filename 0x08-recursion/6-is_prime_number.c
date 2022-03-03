#include "main.h"

/**
 * aux_prime - auxiliary function.
 * @i: parameter i.
 * @j: parameter j.
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int aux_prime(int i, int j)
{
	if (i == j)
		return (1);
	if (i % j == 0)
		return (0);
	return (aux_prime(i, j + 1));
}

/**
 * is_prime_number - function that returns 1.
 * if the input integer is a prime number, otherwise return 0.
 * @n: parameter int n.
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (aux_prime(n, 2));
}
