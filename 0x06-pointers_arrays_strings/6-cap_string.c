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
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * Return: char*
 */

char *cap_string(char *str)
{
	char uniq_c[14] = {',', ';', '.', '!', '?', '"', '('};
	char rem_c[] = {')', '{', '}', '\n', '\t', ' ', '\0'};
	int i, j;

	_strcat(uniq_c, rem_c);
	for (i = 0; i < _strlen(str); i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == uniq_c[j])
			{
				while (str[i])
				{
					i++;
					if ((str[i] >= '0' && str[i] <= '9'))
						break;
					if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
					{
						str[i] = char_toupper(str[i]);
						break;
					}
				}
			}
		}
	}

	return (str);
}
