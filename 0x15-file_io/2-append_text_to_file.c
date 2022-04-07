#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer to filename.
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedescrp;
	ssize_t towrite;
	int a = 0;

	if (filename == NULL)
		return (-1);

	filedescrp = open(filename, O_WRONLY | O_APPEND);

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
