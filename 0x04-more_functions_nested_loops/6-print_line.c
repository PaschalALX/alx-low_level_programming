#include "main.h"

/**
 * print_line - prints a line
 * @n: number of lines
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar(10);

	int no;

	for (no = 0; no < n; no++)
	{
		_putchar('_');
	}
	_putchar(10);
}
