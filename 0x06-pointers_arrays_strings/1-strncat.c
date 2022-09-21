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
 * _strncat - Concatenates strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len, i, j;

	dest_len = _strlen(dest);

	if (n > _strlen(src))
		n = _strlen(src);

	src_len = dest_len - 1 + n;
	j = 0;
	for (i = dest_len; i <= src_len; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
