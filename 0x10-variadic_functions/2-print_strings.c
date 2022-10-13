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
	char *str;

	if (n > 0)
	{
		va_start(args, n);
		while (i--)
		{
			str = va_arg(args, char *);

			str ? printf("%s", str) :
				printf("%p", str);

			if ((i > 0) && separator)
				printf("%s", separator);
		}
		va_end(args);
	}
	putchar(10);
}
