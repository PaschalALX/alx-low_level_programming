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
 * char_toupper - converts character to Uppercase
 * @c: character
 *
 * Return: char
 */
char char_toupper(char c)
{
	int i, j;

	if (!(c >= 'a' && c <= 'z'))
		return (c);

	j = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			break;
		j++;
	}
	return ('A' + j);
}

/**
 * string_toupper - changes all lowercase letter to upper
 * @str: string
 *
 * Return: char*
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = char_toupper(str[i]);
		i++;
	}
	return (str);
}
