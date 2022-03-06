#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  _atoi - Converting a numeric string
 * @s: pointer- to store the value in the variable
 * Return:  If there are no numbers in the string, the function must return 0
 */

int _atoi(char *s)
{
	int result;
	int puiss;

	result = 0;
	puiss = 1;
	while (('-' == (*s)) || ((*s) == '+'))
	{
		if (*s == '-')
			puiss = puiss * -1;
		s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		result = (result * 10) + ((*s) - '0');
		s++;
	}
	return (result * puiss);
}
