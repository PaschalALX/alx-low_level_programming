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

	if (str[0] != ' ')
		wc = 1;

	i = 0;
	while (str[i])
	{
		if ((str[i] == ' ' && str[i + 1] != ' '))
			wc++;
		i++;
	}
	return (wc);
}

/**
 * parse_str - gets the words out of the string
 * @str: string/sentence
 * @words: array of words to replace
 * @word_me_alloc: word memory allocation
 *
 * Return: char **
 */
char **parse_str(char *str, char **words, int word_me_alloc)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
			i++;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			words[j][k] = str[i];
			k++;
			words[j] = (char *) realloc(words[j], sizeof(char) * ++word_me_alloc);
			words[j][k] = '\0';

			k = 0;
			word_me_alloc = 0;
			j++;
		}
		if (str[i] != ' ' && (str[i + 1] != ' ' && str[i + 1] != '\0'))
		{
			words[j][k] = str[i];
			words[j] = (char *) realloc(words[j], sizeof(char) * ++word_me_alloc);
			k++;
		}
		i++;
	}
	return (words);
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
	int wc = word_count(str);
	int w_ma = 1;
	int i, j;

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

	words = (char **) malloc(sizeof(char *) * wc);

	for (i = 0; i < (wc - 1); i++)
	{
		words[i] = (char *) malloc(sizeof(char) * w_ma);
	}

	if (!words)
		return (NULL);

	words = parse_str(str, words, w_ma);
	/*words[wc] = NULL;*/

	return (words);
}
