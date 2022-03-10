#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * of your program.
 * @ac: argument ac.
 * @av: argument double pointer av.
 * Return: pointer str.
 */

char *argstostr(int ac, char **av)
{
	char *new_string;
	int a = 0, b = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}
	size++;
	new_string = malloc(sizeof(char) * (size + ac));
	size = 0;

	if (new_string == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != 0; b++)
		{
			new_string[size] = av[a][b];
			size++;
		}

		new_string[size] = '\n';
		size++;
	}
	return (new_string);
}
