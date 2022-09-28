#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		putchar(10);
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
