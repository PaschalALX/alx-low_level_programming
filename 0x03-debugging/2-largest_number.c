#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

long largest_number(long a, long b, long c)
{
	int largest;

	if (a > b)
		largest = a;
	else
		largest = b;

	if (largest < c)
		largest = c;

	return (largest);
}
