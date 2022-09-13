#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int prev = 1;
	unsigned int curr = 2;
	unsigned int fib[50];
	unsigned int sum, i;

	fib[0] = prev;
	fib[1] = curr;
	for (i = 2; i < 50; i++)
	{
		sum = curr + prev;
		fib[i] = sum;
		prev = curr;
		curr = sum;
	}
	for (i = 0; i < 50; i++)
	{
		printf("%d", fib[i]);
		putchar(',');
		putchar(' ');
	}
	putchar(10);
	return (0);
}
