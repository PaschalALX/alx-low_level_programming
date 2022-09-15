#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long no = 612852475143;
	unsigned long breakdown = no;
	unsigned long buildup = 1;
	int divisor = 2;

	while (1)
	{
		if ((breakdown % divisor) == 0)
		{
			breakdown /= divisor;
			buildup *= divisor;
		}
		else
			divisor++;
		if (buildup >= no)
			break;
	}
	printf("%d\n", divisor);

	return (0);
}
