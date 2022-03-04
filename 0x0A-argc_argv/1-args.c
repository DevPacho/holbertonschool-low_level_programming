#include <stdio.h>

/**
 * main - main function with arguments argc and *argv -
 * program that prints the number of arguments passed into it.
 * @argc: number of words (arguments)
 * entered in the line where the program is called.
 * @argv: pointers to each string formed
 * by entering the words (arguments).
 * Return: 0 (Succes).
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
