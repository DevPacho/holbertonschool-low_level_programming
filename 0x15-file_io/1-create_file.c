#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer to filename.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int filedescrp;
	ssize_t towrite;
	int a = 0;

	if (filename == NULL)
		return (-1);

	filedescrp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);

	if (filedescrp == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (; text_content[a]; a++)
		;

	towrite = write(filedescrp, text_content, a);

	if (towrite == -1)
		return (-1);

	close(filedescrp);
	return (1);
}
