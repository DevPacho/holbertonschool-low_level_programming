#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of words (arguments).
 * @argv: pointers to each string formed by arguments.
 * Return: 0 (Succes).
 */

int main(int argc, char *argv[])
{
	int filedescrp, filedescrp2;
	char buffer[1024];
	ssize_t toread, towrite;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	filedescrp = open(argv[1], O_RDONLY);

	if (filedescrp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	filedescrp2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);

	if (filedescrp2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (toread > 0)
	{
		toread = read(filedescrp, buffer, 1024);
		if (toread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		towrite = write(filedescrp2, buffer, toread);
		if (towrite == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(filedescrp) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedescrp), exit(100);

	if (close(filedescrp2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedescrp2), exit(100);

	return (0);
}
