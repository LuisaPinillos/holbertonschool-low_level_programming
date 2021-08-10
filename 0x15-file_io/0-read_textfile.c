#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes, num;
	ssize_t writed;
	char *buffer = NULL;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
	{
		return (0);
	}
	num = read(fdes, buffer, letters);
	if (num == -1)
	{
		return (0);
	}
	writed = write(STDOUT_FILENO, buffer, num);
	close(fdes);
	free(buffer);
	return (writed);
}
