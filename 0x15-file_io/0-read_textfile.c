#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: filename to be opened
 * @letters: number of letters to be read and printed
 *
 * Return: actual number of letters it could read and
 * print (ssize_t)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, file_size, output_size;
	char *buffer;

	if (!filename)
		return (0);

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	/* create buffer */
	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);

	/* read file */
	file_size = read(fd, buffer, letters);
	if (file_size < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[file_size] = '\0';

	/* write buffer */
	output_size = write(1, buffer, letters);
	if (output_size < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (file_size);
}
