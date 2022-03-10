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
	int a, b, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}
	size++;
	str = malloc(sizeof(char) * (size + ac));
	size = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[size] = av[a][b];
			size++;
		}
		str[size] = '\n';
		size++;
	}
	return (str);
}
