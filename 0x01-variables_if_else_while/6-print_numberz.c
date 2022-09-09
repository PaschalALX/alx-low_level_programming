#include <stdio.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int no;

	for (no = '0'; no <= '9'; no++)
	{
		putchar(no);
	}
	putchar('\n');
	return (0);
}
