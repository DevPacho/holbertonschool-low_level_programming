#include <stdio.h>

/**
 * main - main function with arguments argc and *argv -
 * program that prints its name, followed by a new line.
 * @argc: number of words (arguments)
 * entered in the line where the program is called.
 * @argv: pointers to each string formed
 * by entering the words (arguments).
 * Return: 0 (Succes).
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("argv[%d] = %s\n", a, argv[a]);
	}
	return (0);
}
