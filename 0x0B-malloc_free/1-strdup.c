#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates new copy of string
 * @str: string to be copied.
 *
 * Return: pointer to char.
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);

	new_str = (char *) malloc(sizeof(char) * (strlen(str) + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= (int)strlen(str); i++)
	{
		*(new_str + i) = *(str + i);
	}
	return (new_str);
}
