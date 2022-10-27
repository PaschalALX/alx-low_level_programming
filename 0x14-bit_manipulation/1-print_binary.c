
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
	char bit;

	while (n)
	{
		check = n & 1;
		bit = check ? '1' : '0';
		_putchar(bit);
		n >>= 1;
	}
}
