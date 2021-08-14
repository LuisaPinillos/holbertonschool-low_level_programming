#include "main.h"

/**
 * append_text_to_file - function that appends text
 * at the end of a file.
 * @filename: file
 * @text_content: string
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, i = 0, wr = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		wr = write(fd, text_content, i);

		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
