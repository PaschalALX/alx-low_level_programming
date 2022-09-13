#include "main.h"

/**
 * jack_bauer - a function that prints minutes between 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int tens_hr, units_hr;
	int tens_min, units_min;

	for (tens_hr = '0'; tens_hr <= '2'; tens_hr++)
	{
		for (units_hr = '0'; units_hr <= '9'; units_hr++)
		{
			if (tens_hr == '2' && units_hr == '4')
				break;
			for (tens_min = '0'; tens_min <= '5'; tens_min++)
			{
				for (units_min = '0'; units_min <= '9'; units_min++)
				{
					_putchar(tens_hr);
					_putchar(units_hr);
					_putchar(':');
					_putchar(tens_min);
					_putchar(units_min);
					_putchar('\n');
				}
			}
		}
	}
}
