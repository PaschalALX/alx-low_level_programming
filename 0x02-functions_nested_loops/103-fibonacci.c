#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int prev = 1;
	unsigned long int curr = 2;
	unsigned long int fib[50];
	unsigned long int sum, i;

	fib[0] = prev;
	fib[1] = curr;
	for (i = 2; i < 50; i++)
	{
		sum = curr + prev;
		fib[i] = sum;
		prev = curr;
		curr = sum;
	}
	sum = 0;
	for (i = 0; i < 50; i++)
	{
		if ((fib[i] % 2) == 0)
			sum += fib[i];
		if (fib[i] > 4000000)
			break;
	}
	printf("%lu", sum);
	putchar(10);
	return (0);
}
