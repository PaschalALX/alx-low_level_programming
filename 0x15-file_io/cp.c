#include "main.h"

int main(int argc, char argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from < 0)
	{	
		write(STDERR_FILENO, "Error: Can't read from file %s\n", 29 + _strlen(argv[1]));
		exit(98);
	}

	fd_to = open(argv[2], O_TRUNC | O_CREATE | O_WRONLY, 0664);
	if (fd_to < 0)
	{	
		write(STDERR_FILENO, "Error: Can't write to %s\n", 23 + _strlen(argv[2]));
		exit(99);
	}

	
	return (0);
}
