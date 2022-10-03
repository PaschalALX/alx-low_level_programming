#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char *.
 */
char *str_concat(char *s1, char *s2)
{
	int size, s1_len, s2_len;
	int i, j;
	char *new_sptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = (int)strlen(s1);
	s2_len = (int)strlen(s2);
	size = s1_len + s2_len + 1;

	new_sptr = (char *) malloc(sizeof(char) * size);
	if (!new_sptr)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		*(new_sptr + i) = *(s1 + i);

	for (j = 0; i <= size; i++, j++)
		*(new_sptr + i) = *(s2 + j);

	return (new_sptr);
}
