#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 1024; a++)
	{
		if (((a % 3) == 0) || ((a % 5) == 0))
		{
			b += a;
		}
	}
	printf("%d", b);
	putchar(10);
	return (0);
}
