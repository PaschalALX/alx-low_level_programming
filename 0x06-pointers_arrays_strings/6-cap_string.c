#include <stdio.h>

int _strlen(char *str);

/**
 * _strcat - string concat
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
 * char_toupper - converts character to Uppercase
 * @c: character
 *
 * Return: char
 */
char char_toupper(char c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (c);
	return (c - 32);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * Return: char*
 */

char *cap_string(char *str)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
				&& (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
					s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
					s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
					s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
					|| s[i - 1] == '\n'))
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
	return (s);
}
