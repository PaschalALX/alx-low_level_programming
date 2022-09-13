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

	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
