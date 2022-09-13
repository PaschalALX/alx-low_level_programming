#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i == 98)
			break;
		_putchar(',');
		_putchar(' ');

	}
}
