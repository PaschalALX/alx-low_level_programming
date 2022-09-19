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
	unsigned long int i;

	for (i = 0; i < strlen(str); i = i + 2)
	{
		putchar(str[i]);
	}
	putchar(10);
}
