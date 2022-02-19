#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14 (and a new line)
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	char i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
