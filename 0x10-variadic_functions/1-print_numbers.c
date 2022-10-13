#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: seperator format
 * @n: number of variadic arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = n;

	if (n > 0)
	{
		va_start(args, n);
		while (i--)
		{
			printf("%d", va_arg(args, int));
			if ((i > 0) && separator)
				printf("%s", separator);
		}
		va_end(args);
	}
	putchar(10);
}
