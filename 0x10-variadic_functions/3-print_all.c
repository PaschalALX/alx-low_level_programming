#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = -1;
	char *str, *str_fmt = "%s%p", *comma = "";
	va_list args;

	if (format)
	{
		va_start(args, format);
		while (format[++i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", comma, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", comma, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", comma, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str)
						str_fmt = "%s%s";
					printf(str_fmt, comma, str);
					break;
				default:
					continue;
			}
			comma = ", ";
		}
		va_end(args);
	}
	printf("\n");
}
