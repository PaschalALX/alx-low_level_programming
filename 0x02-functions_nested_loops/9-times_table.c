#include "main.h"

/**
 * times_table - Time table from 0 to 9
 *
 * Return: void
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
