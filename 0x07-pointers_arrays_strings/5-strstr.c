#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string haystack
 * @needle: string needle
 *
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	int start, checker, i, j;

	start = -1;
	i = j = checker = 0;

	for (i = 0; *(haystack + i); i++)
		for (j = 0; *(needle + j); j++)
			if (*(haystack + i) == *needle)
				start = i;
	if (start == -1)
		return (NULL);

	for (i = start, j = 0; *(haystack + i) || *(needle + j); i++, j++)
		if (*(haystack + i) != *(needle + j))
			return (NULL);

	return (haystack + start);
}
