#include "main.h"

/**
 * _abs - Returns absolute value of a number
 * @n: Receives a number
 *
 * Return: int
 */
int _abs(int n)
{
	int res;

	if (n >= 0)
		res = n;
	else
	{
		res = (n * -1);
	}
	return (res);
}
