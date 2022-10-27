
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to integer
 * @index: index at which bit is to be set to 1
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _n;

	_n = *n;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	_n |= 1 << index;

	*n = _n;
	return (1);
}
