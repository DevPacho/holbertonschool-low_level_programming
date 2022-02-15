#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
