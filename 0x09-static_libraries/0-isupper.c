#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: parameter c
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
