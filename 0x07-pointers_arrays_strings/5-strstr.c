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
	int i, j, k, needle_len;

	if (!strlen(needle))
		return (haystack);

	needle_len = (int) strlen(needle);

	for (i = 0; *(haystack + i); i++)
	{
		if (*needle == *(haystack + i))
		{
			for (k = 0, j = i; k < needle_len; j++, k++)
				if (*(needle + k) != *(haystack + j))
					break;
				else if ((k == needle_len - 1) && (*(needle + k) == *(haystack + j)))
					return (haystack + i);
		}
	}
	return (NULL);
}
