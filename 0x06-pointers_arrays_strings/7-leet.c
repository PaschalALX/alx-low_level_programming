#include <stdio.h>
#include <string.h>

/**
 * _strlen - gets length of string
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
 * leet - encodes a string into 1337
 * @str: string
 *
 * Return: char
 */
char *leet(char *str)
{
	char upper[6] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char lower[6] = {'a', 'e', 'o', 't', 'l', '\0'};
	char digit[6] = {'4', '3', '0', '7', '1', '\0'};
	int i, j;

	for (i = 0; i <= _strlen(str); i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if ((str[i] == upper[j]) || (str[i] == lower[j]))
			{
				str[i] = digit[j];
			}
		}
	}
	return (str);
}
