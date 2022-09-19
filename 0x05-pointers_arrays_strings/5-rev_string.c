#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - reverse string
 * @s: string parameter
 *
 * Return: Void
 */

void rev_string(char *s)
{
	char *str_cpy;
	int i, j;

	str_cpy = (char *) malloc(strlen(s) + 1);
	j = 0;
	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		str_cpy[i] = s[j];
		j++;
	}
	str_cpy[strlen(s)] = '\0';
	strcpy(s, str_cpy);
}
