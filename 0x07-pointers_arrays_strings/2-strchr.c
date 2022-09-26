#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: char *
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i); i++)
	{
		if (c == *(s + i))
			return (s + i);
	}
	return (NULL);
}
