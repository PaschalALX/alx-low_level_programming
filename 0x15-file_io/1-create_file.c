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
 * create_file - creates file with permissions
 * if file already exists, don't change permissions and just truncate it
 * @filename: name to giv to new file
 * @text_content: wites thiser content into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w_size;

	if (!filename)
		return (-1);

	/* create with permissions if file doesn't exist, else truncate */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
