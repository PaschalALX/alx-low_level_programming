#include <stdio.h>

/**
 * _strlen - Returns length of string
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
 * _strcmp - Compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);

		if (_strlen(s1) > _strlen(s2))
			return (15);
		else if (_strlen(s1) < _strlen(s2))
			return (-15);
	}
	return (0);
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
