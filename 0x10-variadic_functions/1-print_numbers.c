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

	if (n > 0 && separator)
	{
		va_start(args, n);
		while (i--)
		{
			if (i == 0)
			{
				printf("%d", va_arg(args, int));
				break;
			}
			printf("%d%s", va_arg(args, int), separator);
		}
		putchar(10);
	}
}
