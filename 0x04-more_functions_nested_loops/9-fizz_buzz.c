#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			if (a % 3 == 0)
			{
				printf("Fizz");
			}
			if (a % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d", a);
		}
		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
