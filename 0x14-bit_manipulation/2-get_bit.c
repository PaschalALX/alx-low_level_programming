
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: index of bit to be returned
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(long int) * 8))
		return (-1);

	if (!index)
		return (n & 1);

	return (get_bit(n >> 1, index - 1));
}
