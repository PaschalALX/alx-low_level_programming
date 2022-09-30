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
 * _strcat - Concatenates strings
 * @dest: destination
 * @src: source
 *
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, i, j, null_byte_idx;

	dest_len = _strlen(dest);
	j = 0;

	for (i = dest_len; src[j]; i++)
	{
		dest[i] = src[j];
		j++;
	}
	null_byte_idx = dest_len + j;
	dest[null_byte_idx] = '\0';

	return (dest);
}
