#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: character parameter
 *
 * Return: int
 */

int _isdigit(int c)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (c == num)
			return (1);
	}
	return (0);
}
