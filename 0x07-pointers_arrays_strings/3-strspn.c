#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to scan
 * @accept: string containing the chars to match
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int num, checker, i, j;

	num = checker = i = j = 0;
	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				checker++;
				num++;
				break;
			}
		}
		if (!checker)
			break;
		checker = 0;
	}

	return (num);
}
