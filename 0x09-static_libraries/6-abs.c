#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @r: parameter r
 * Return: (Success)
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		r *= -1;
		return (r);
	}
}
