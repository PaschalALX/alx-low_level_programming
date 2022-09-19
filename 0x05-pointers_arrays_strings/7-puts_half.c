#include <stdio.h>
#include <string.h>

/**
 * puts_half - puts half of a string
 * @str: string parameter
 *
 * Return: Void
 */

void puts_half(char *str)
{
	unsigned long int start, len, i;

	len = strlen(str);
	start = len / 2;

	if (len % 2)
		start += 1;

	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
