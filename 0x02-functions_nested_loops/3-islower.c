#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: parameter c
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
