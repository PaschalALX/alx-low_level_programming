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
	char *str, *str_fmt = "%p";
	va_list args;

	if (format)
	{
		va_start(args, format);
		while (format[++i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str)
						str_fmt = "%s";
					printf(str_fmt, str);
					break;
				default:
					continue;
			}
			if (format[i + 1])
				printf(", ");
		}
		va_end(args);
	}
	printf("\n");
}
