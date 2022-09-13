#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets in small letters x 10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i = 0;

	while (i < 10)
	{
		while (1)
		{
			_putchar(alpha);
			if (alpha == 'z')
				break;
			alpha++;
		}
		alpha = 'a';
		_putchar(10);
		i++;
	}
}
