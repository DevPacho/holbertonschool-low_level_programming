#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, a;

	for (m = 0; m < 1024; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			a += m;
		}
	}
	printf("%d\n", a);
	return (0);
}
