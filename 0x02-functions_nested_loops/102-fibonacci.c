#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int prev = 1;
	int curr = 2;
	int fib[50];
	int sum, i;

	fib[0] = prev;
	fib[1] = curr;
	for (i = 2; i < 50; i++)
	{
		sum = curr + prev;
		fib[i] = sum;
		prev = curr;
		curr = sum;
	}
	for (i = 0; 1 < 50; 1++)
	{
		printf("%d", fib[i]);
		putchar(',');
		putchar(' ');
	}
	putchar(10);
	return (0);
}
