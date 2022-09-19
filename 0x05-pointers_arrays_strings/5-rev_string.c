#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string parameter
 *
 * Return: Void
 */

void rev_string(char *s)
{
	char str_cpy[10];
	int i, j;
	
	j = 0;
	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		str_cpy[i] = s[j];
		j++;
	}
	str_cpy[strlen(s)] = '\0';
	strcpy(s, str_cpy);
}
