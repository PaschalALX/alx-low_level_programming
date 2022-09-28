/**
 * checker_prime - checks if a number is prime
 * @n: number to be checked
 * @fac: possible factor
 *
 * Return: int
 */
int checker_prime(int n, int fac)
{
	if (!(n % fac))
		return (0);
	if (fac >= (n / 2))
		return (1);
	return (checker_prime(n, fac + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (checker_prime(n, 2));
}
