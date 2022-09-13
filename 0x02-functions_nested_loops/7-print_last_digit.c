#include "main.h"

/**
 * print_last_digit - a function that returns the last digt of a number
 * @n: receives a number
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int ld = (n % 10);

	_putchar(ld + '0');
	return (ld);
}
