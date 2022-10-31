#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}

	return (len);
}


/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file
 * @text_content: text to append to file
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w_size;

	if (!filename)
		return (-1);

	/* append to file if file exists */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	/* if nothing to write, just return newly created file */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write */
	w_size = write(fd, text_content, _strlen(text_content));
	if (w_size < 0 || w_size != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
