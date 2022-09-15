#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of diagonal lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int no, no_space;

	if (n <= 0)
		_putchar(10);

	for (no = 1; no <= n; no++)
	{
		for (no_space = 0; no_space < no - 1; no_space++)
			_putchar(' ');
		_putchar('\\');
		_putchar(10);
	}
}
