#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: parameter n
 * Return: (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
