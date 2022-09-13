#include "main.h"

/**
 * print_sign - Checks sign of character
 * @n: Receives a character argument
 *
 * Return: int
 */
int print_sign(int n)
{
	int res = 0;

	if (n > 0)
	{
		_putchar('+');
		res = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		res = 0;
	}
	else
	{
		_putchar('-');
		res = -1;
	}
	return (res);
}
