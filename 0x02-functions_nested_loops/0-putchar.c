#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";
	int i = 0;

	while (1)
	{
		_putchar(str[i]);
		if (i == 7)
			break;
		i++;
	}
	_putchar(10);
	return (0);
}
