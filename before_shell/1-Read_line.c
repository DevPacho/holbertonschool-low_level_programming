#include "preshell.h"

/**
 * _exit - function for exit and free
 * @line: char pointer input
 * Return: Nothing
 */
void _exit_(char *line)
{
	printf("exit\n");
	free(line);
	exit(EXIT_SUCCESS);
}

/**
 * main - main function
 * Return: depends of exit
 */
int main(void)
{
	char *line = NULL, *EXIT = "exit";
	size_t len = 1024, i;

	line = (char *)malloc(len * sizeof(char));
	if (line == NULL)
	{
		perror("Unable allocate buffer");
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		printf("$ ");
		if ((getline(&line, &len, stdin)) == -1)
			break;
		if (line)
			for (i = 0; line[i]; i++)
			{
				if (line[i] != EXIT[i])
					line[i + 1] = '\0';
				else if (i == 3)
					_exit_(line);
			}
	}
	_exit_(line);
}
