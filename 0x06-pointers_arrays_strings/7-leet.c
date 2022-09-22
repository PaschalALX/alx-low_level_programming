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
	int english[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int leet[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (i = 0; i <= _strlen(str); i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (str[i] == english[j])
				str[i] = leet[j];
		}
	}
	return (str);
}
