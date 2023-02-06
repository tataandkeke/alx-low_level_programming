#include "main.h"

/**
 * create_file - Read a text file
 * @filename: char string
 * @text_content: number of letters
 * Return: number of letter
 */

int create_file(const char *filename, char *text_content)
{
	int file_open, r, i;

	if (filename == NULL)
		return (-1);

	file_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_open == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		r = write(file_open, text_content, i);
		if (r == -1)
			return (-1);
	}

	close(file_open);
	return (1);
}
