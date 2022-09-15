#include "main.h"

/**
 * _isupper - checks if character is in uppercase
 * @c: character parameter
 *
 * Return: int
 */

int _isupper(int c)
{
	int ALPHA;

	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		if (c == ALPHA)
			return (1);
	}
	return (0);
}
