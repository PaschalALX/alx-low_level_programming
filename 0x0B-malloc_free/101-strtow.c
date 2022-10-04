#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * word_count - counts the number of words in a str
 * @str: string/sentence
 *
 * Return: int
 */
int word_count(char *str)
{
	int wc, i;

	wc = 0;
	if (str[0] != ' ')
		wc = 1;

	i = 1;
	while (str[i])
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' && str[i + 1] != '\0'))
			wc++;
		i++;
	}
	return (wc);
}

/**
 * strtow - splits a string into words
 * @str: string/sentence
 *
 * * Return: char **
 */
char **strtow(char *str)
{
	char **words;
	char *str_cpy;
	int wc, i, j;
	char *token;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	j = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			j++;
	}
	if (!j)
		return (NULL);

	str_cpy = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	strcpy(str_cpy, str);

	wc = 0;
	wc = word_count(str);
	words = (char **)malloc(sizeof(char *) * wc + 1);
	i = 0;
	token = strtok(str_cpy, " ");
	while (token != NULL)
	{
		words[i] = (char *)malloc(sizeof(char));
		words[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	words[wc] = NULL;
	return (words);
}
