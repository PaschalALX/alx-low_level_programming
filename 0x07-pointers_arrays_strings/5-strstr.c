#include <stdio.h>
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string haystack
 * @needle: string needle
 *
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	int start, i, j, needle_len;

	start = -1;
	i = j = 0;

	for (i = 0; *(haystack + i); i++)
		for (j = 0; *(needle + j); j++)
			if (*(haystack + i) == *needle)
				start = i;
	if (start == -1)
		return (NULL);

	needle_len = (int)strlen(needle);
	for (i = start, j = 0; j < needle_len; i++, j++)
		if (*(haystack + i) != *(needle + j))
			return (NULL);

	return (haystack + start);
}
