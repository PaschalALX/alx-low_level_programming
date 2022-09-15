#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of diagonal lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar(10);

	int no, no_space;

	for (no = 1; no <= n; no++)
	{
		for (no_space = 0; no_space < no; no_space++)
			_putchar(' ');
		_putchar('\\');
		_putchar(10);
	}
}
