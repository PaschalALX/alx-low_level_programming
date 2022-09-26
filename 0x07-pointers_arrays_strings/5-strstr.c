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
	int idx, i, j, k, needle_len;

	idx = -1;
	needle_len = (int) strlen(needle);
	for (i = 0; *(haystack + i); i++)
	{
		if (*needle == *(haystack + i))
		{

			for (k = 0, j = i; k < needle_len; j++, k++)
			{
				if (*(needle + k) != *(haystack + j))
				{
					k = 0;
					break;
				}
				else if ((k == needle_len - 1) && (*(needle + k) == *(haystack + j)))
				{
					idx = i;
					break;
				}
			}
		}
		if (idx >= 0)
			break;
	}

	if (idx >= 0)
		return (haystack + idx);
	return (NULL);
}
