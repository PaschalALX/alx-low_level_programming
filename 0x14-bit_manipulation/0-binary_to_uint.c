#include <string.h>

/**
 * binary_to_uint2 - converts a binary number to an unsigned int.
 * @b: string of binaries
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint2(const char *b)
{
	unsigned int i;
	unsigned int base10;
	unsigned int max_exp;

	if (b[0] == 48 && b[1] == 0)
		return (0);

	base10 = 0;
	max_exp = max_expo(b);

	for (i = 0; b[i]; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		base10 += two_to_pow(max_exp - i) * (b[i] - 48);
	}
	return (base10);
}
