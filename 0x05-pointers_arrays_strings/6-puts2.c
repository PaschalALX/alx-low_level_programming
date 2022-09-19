#include <stdio.h>
#include <string.h>

/**
 * puts2 - put strings
 * @str: string parameter
 *
 * Return: Void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i = i + 2)
	{
		putchar(str[i]);
	}
	str_cpy[strlen(s)] = '\0';
	strcpy(s, str_cpy);
}
