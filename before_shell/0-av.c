#include <stdio.h>

int main(int ac, char **av)
{
	int a;

	for (a = 0; a < ac; a++)
		printf("av %d = %s\n", a, av[a]);
	return (0);
}
