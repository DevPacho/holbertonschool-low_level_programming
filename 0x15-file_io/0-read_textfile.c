#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer to filename.
 * @letters: amount of file content.
 * Return: the actual number of letters or 0 if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescrp; /** file descriptor (int value to return) **/
	ssize_t number_letters; /** maximum number of letters to read **/
	ssize_t towrite; /** for the return value **/
	char *buffer; /** saves the read characters **/

	if (filename == NULL)
		return (0);

	filedescrp = open(filename, O_RDONLY); /** opens file with read only mode **/
	if (filedescrp == -1) /** if fails **/
	{
		close(filedescrp);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	number_letters = read(filedescrp, buffer, letters); /** reads file **/

	if (number_letters == -1)
		return (0);

	towrite = write(STDOUT_FILENO, buffer, number_letters);
	/** Writes everything to the standard output **/

	if (towrite == -1)
		return (0);

	close(filedescrp);
	return (towrite);
}
