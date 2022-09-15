#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;
	int k = size;

	for (i = 0; i < size; i++)
	{
		k--;
		for (j = 0; j < size; j++)
		{
			if (j >= k)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar(10);
	}
}
