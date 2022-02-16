#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int f, r;

	for (f = 0; f <= 9; f++)
	{
		for (r = 0; r <= 9; r++)
		{
			int resultado = f * r;

			if (r == 0)
			{
				_putchar('0');
			} else if (resultado <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(resultado + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(resultado / 10 + '0');
				_putchar(resultado % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
