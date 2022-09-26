#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: char *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= (int)strlen(s); i++)
	{
		if (c == *(s + i))
			return (s + i);
	}
	return (NULL);
}
