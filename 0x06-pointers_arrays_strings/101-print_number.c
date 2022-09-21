#include "main.h"

/**
 * print_number - prints numbers
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int n_copy = n;
	int multi_tens = 1;
	unsigned int digit, diff;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if ((n / 10) == 0)
		_putchar((n % 10) + '0');
	else
	{
		while (1)
		{
			if ((n_copy / 10) == 0)
				break;
			n_copy /= 10;
			multi_tens *= 10;
		}
		diff = n;
		while (1)
		{
			if (multi_tens < 1)
				break;
			digit = (diff / multi_tens);
			diff = diff - (digit * multi_tens);
			_putchar(digit + '0');
			multi_tens /= 10;
		}
	}
}
