/**
 * check_sqrt - checks for sqrt of n
 * @n: squared number
 * @fac: possible factor of n
 *
 * Return: int
 */
int check_sqrt(int n, int fac)
{
	if ((fac * fac) == n)
		return (fac);
	if (fac >= n / 2)
		return (-1);
	return (check_sqrt(n, fac + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: squared number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (check_sqrt(n, 1));
}
