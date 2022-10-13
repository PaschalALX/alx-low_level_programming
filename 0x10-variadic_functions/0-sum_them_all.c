#include <stdarg.h>

/**
 * sum_them_all - sum all numbers
 * @n: number of variadic arguments
 *
 * Return: void
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int i = n;

	if (n <= 0)
		return (0);

	va_start(args, n);
	while (i-- != 0)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
