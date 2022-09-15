#include "main.h"

/**
 * print_square - prints squares
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar(10);
	}
}
