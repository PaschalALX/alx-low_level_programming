#include <stdio.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, x, y;
	int _x, _y;

	x = _x = '1';
	y = _y = '2';
	for (i = '0'; i <= '9'; i++)
	{
		for (j = x; j <= '9'; j++)
		{
			for (k = y; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		_x++;
		_y++;
		x = _x;
		y = _y;
	}
	putchar('\n');
	return (0);
}
