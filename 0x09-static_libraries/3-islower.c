#include "main.h"

/**
 * _islower - Checks if character is in lower case
 * @c: Receives a character arg
 *
 * Return: int
 */
int _islower(int c)
{
	int res = 0;
	int alpha = 'a';

	while (1)
	{
		if (c == alpha)
			res = 1;
		if (alpha == 'z')
			break;
		alpha++;
	}
	return (res);
}
