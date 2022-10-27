#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int check = 0;
	unsigned long int n_cpy;
	int expo, com_bindex;
	char bit,  flag;

	n_cpy = n;
	com_bindex = 1;
	expo = bit = flag = 0;

	if (!n)
		_putchar('0');

	while (n_cpy)
	{
		expo += 1;
		n_cpy >>= 1;
	}

	while (expo)
	{
		com_bindex *= 2;
		expo--;
	}

	while (com_bindex)
	{
		check = n & com_bindex;
		bit = check ? '1' : '0';

		if (bit == '0')
		{
			if ((bit == '0') && flag)
				_putchar(bit);
			flag = 1;
		}
		else
			_putchar(bit);
		com_bindex >>= 1;
	}
}
