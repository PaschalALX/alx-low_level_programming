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
