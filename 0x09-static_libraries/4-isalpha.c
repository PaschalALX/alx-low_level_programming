#include "main.h"

/**
 * _isalpha - Checks if character is an alphabet
 * @c: Receives a character argument
 *
 * Return: int
 */
int _isalpha(int c)
{
	int res = 0;
	int alpha = 'a';
	int ALPHA = 'A';

	while (1)
	{
		if (c == alpha)
		{
			res = 1;
			return (res);
		}
		if (alpha == 'z')
			break;
		alpha++;
	}
	while (1)
	{
		if (c == ALPHA)
		{
			res = 1;
			return (res);
		}
		if (ALPHA == 'Z')
			break;
		ALPHA++;
	}
	return (res);
}
