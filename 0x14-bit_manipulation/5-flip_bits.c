
#include "main.h"

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
	unsigned long int diff;
	unsigned int res;

	diff = n ^ m;
	res = 0;

	while (diff)
	{
		res += diff & 1;
		diff >>= 1;
	}
	return (res);
}
