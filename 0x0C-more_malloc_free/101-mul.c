#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function with arguments argc and *argv -
 * program that prints its name, followed by a new line.
 * @argc: number of words (arguments)
 * entered in the line where the program is called.
 * @argv: pointers to each string formed
 * by entering the words (arguments).
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (a >= 48 && <= 57)
	{
		printf("Error\n");
		exit(98);
	}

	if (b >= 48 && <= 57)
	{
		printf("Error\n");
		exit(98);
	}
}
