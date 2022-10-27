
#include "main.h"

/**
 * to_pow - returns base to power
 * @base: base number
 * @exp: exponential
 *
 * Return: unsigned int
 */
unsigned int to_pow(unsigned int base, unsigned int exp)
{
	unsigned int n;
	unsigned int res;

	if (!exp)
		return (1);

	if (exp == 1)
		return (base);

	n = 1;
	res = base;

	while (n < exp)
	{
		res *= base;
		n++;
	}
	return (res);
}

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first integer
 * @m: second integer
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int res;
	int head_expo;

	flip = n ^ m;

	head_expo = 0;
	res = 0;

	while (((long)to_pow(2, head_expo) - (signed int)flip) <= 0)
	{
		head_expo++;
	}

	head_expo--;

	while (head_expo > -1)
	{
		if (((signed int)flip - (long)to_pow(2, head_expo)) >= 0)
		{
			res += 1;
			flip -= (unsigned long)to_pow(2, head_expo);
			head_expo--;
		}
		else
			head_expo--;
	}
	return (res);
}
