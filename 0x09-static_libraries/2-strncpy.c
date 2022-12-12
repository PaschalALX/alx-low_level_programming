#include <stdio.h>

/**
 * _strlen - Returns length of a string
 * @str: string
 *
 * Return: int
 */
int _strlen(char *str)
{
	int len, i;

	len = 0;
	for (i = 0; str[i]; i++)
		len++;

	return (len);
}

/**
 * _strncpy - Copies strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len, i;

	src_len = _strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i <= src_len)
			dest[i] = src[i];
		else
			dest[i] = 0;
	}
	return (dest);
}
