#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of binaries
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	size_t len;
	int i;
	int base2, base10;

	if (!b)
		return (0);

	base2 = 1;
	base10 = 0;
	len = strlen(b);

	if (!len)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);

		base10 += base2 * (b[i] - 48);
		base2 *= 2;
	}
	return (base10);
}
