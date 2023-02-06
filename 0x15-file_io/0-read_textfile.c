#include "main.h"

/**
 * read_textfile - Read a text file
 * @filename: char string
 * @letters: number of letters
 * Return: number of letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open;
	ssize_t rc, wc;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_open = open(filename, O_RDWR);
	if (file_open == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rc = read(file_open, buffer, letters);
	if (rc == -1)
		return (0);

	wc = write(STDOUT_FILENO, buffer, rc);
	if (wc == -1 || rc != wc)
		return (0);
	free(buffer);

	close(file_open);
	return (wc);
}
