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

	if (!separator)
		return;

	if (n <= 0)
		return;

	va_start(args, n);
	while (i--)
	{
		if (i == 0)
		{
			printf("%i", va_arg(args, int));
			break;
		}
		printf("%i%s", va_arg(args, int), separator);
	}
	putchar(10);
}
