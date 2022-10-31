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
	int fd;
	ssize_t r_size, w_size;
	char *buffer;

	if (!filename)
		return (0);

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* create buffer */
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	/* read file */
	r_size = read(fd, buffer, letters);
	if (r_size == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write buffer */
	w_size = write(STDOUT_FILENO, buffer, r_size);
	if (w_size == -1 || w_size != r_size)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (r_size);
}
