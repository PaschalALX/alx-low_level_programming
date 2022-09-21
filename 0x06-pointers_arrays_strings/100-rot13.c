#include <stdio.h>

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
 * rot13 - encodes a string using rot13.
 * @str: string
 *
 * Return: char*
 */
char *rot13(char *str)
{
	char original[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char encode[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M'};
	int i, j;

	for (i = 0; i < _strlen(str); i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (str[i] == original[j])
			{
				str[i] = encode[j];
				break;
			}
		}
	}
	return (str);
}
