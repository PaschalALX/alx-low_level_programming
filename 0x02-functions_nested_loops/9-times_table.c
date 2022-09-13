#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * starting from 00:00 to 23:59.
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int a, b, c, d, z;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			z = a * b;
			if (z <= 9)
			{
				c = ' ';
				d = z + '0';
			}
			else
			{
				c = (z / 10) + '0';
				d = (z % 10) + '0';
			}
			if (b != 0)
			{
				_putchar(' ');
				_putchar(c);
			}
			_putchar(d);
			if (b == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar(10);
	}
}
