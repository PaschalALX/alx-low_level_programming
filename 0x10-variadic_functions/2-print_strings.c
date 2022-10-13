#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: seperator format
 * @n: number of variadic arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = n;

	if (!separator || !n)
		return;

	va_start(args, n);
	while (i--)
	{
		if (i == 0)
		{
			printf("%s", va_arg(args, char *));
			break;
		}
		printf("%s%s ", va_arg(args, char *), separator);
	}
	putchar(10);
}
