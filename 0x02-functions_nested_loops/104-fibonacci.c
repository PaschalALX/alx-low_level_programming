#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long prev = 1;
	unsigned long curr = 2;
	unsigned long sum, i;

	printf("%d, %d, ", prev, curr);

	for (i = 2; i < 99; i++)
	{
		sum = curr + prev;
		prev = curr;
		curr = sum;
		printf("%lu", sum);
		if (i == 98)
			break;
		printf(", ");
	}
	putchar(10);

	return (0);
}
