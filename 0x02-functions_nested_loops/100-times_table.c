#include "main.h"

/**
 * printer - to print condtional output
 * @b: b parameter
 * @c: c parameter
 * @d: d parameter
 * @e: e parameter
 * @n: n parameter
 *
 * Return: void
 */
void printer(int b, int c, int d, int e, int n)
{
	if (b == 0)
		_putchar(e);
	else
	{
		_putchar(c);
		_putchar(d);
		_putchar(e);
	}
	if (b != n)
	{
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * print_times_table - Prints to times table
 * @n: nth term
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, c, d, e, z;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			z = a * b;
			if (z <= 9)
			{
				c = ' ';
				d = ' ';
				e = z + '0';
			}
			else if (z > 9 && z < 100)
			{
				c = ' ';
				d = (z / 10) + '0';
				e = (z % 10) + '0';
			}
			else if (z >= 100)
			{
				c = (z / 100) + '0';
				d = ((z % 100) / 10) + '0';
				e = ((z % 100) % 10) + '0';
			}
			printer(b, c, d, e, n);
		}
		_putchar(10);
	}
}
