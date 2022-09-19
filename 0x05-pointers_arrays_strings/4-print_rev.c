#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints string in reverse order
 * @s: string parameter
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = (len - 1); i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
