#include "main.h"

/**
 * more_numbers - print from 0 - 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int no, cnt;
	int a, b;

	for (cnt = 0; cnt < 10; cnt++)
	{
		for (no = 0; no <= 14; no++)
		{
			if (no > 9)
			{
				a = no / 10;
				b = no % 10;
				_putchar(a + '0');
			}
			else
				b = no;
			_putchar(b + '0');
		}
		_putchar(10);
	}
}
