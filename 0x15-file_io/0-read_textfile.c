#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

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
	int fd, file_size;
	char buffer[1024];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	file_size = read(fd, buffer, letters);

	if (file_size < 0)
		return (0);

	if ((unsigned int)(file_size) < (unsigned int)letters)
	{
		buffer[file_size] = '\0';
		letters = file_size;
	}
	else
		buffer[letters] = '\0';

	write(1, buffer, letters);
	return (letters);
}
