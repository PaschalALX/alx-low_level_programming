#include <stdio.h>

/**
 * _strlen - Gets length of string
 * @s: string parameter
 *
 * Return: Integer
 */

int _strlen(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i]; i++)
		len++;

	return (len);
}
