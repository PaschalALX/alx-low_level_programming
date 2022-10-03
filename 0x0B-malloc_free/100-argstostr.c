#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_str_size - get size of new string to be create
 * @av: argument vector from stdin
 * @ac: argument count
 * @str_size: pointer to string size to be updated
 *
 * Return: void
 */
void new_str_size(char **av, int ac, int *str_size)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		*str_size += (int) strlen(av[i]) + 1;
	}
}

/**
 * argstostr - converts arguments to a string
 * @ac: argument count
 * @av: argument vector
 *
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int str_size = 1;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	new_str_size(av, ac, &str_size);

	str = (char *) malloc(sizeof(char) * str_size);

	if (!str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j <= (int)strlen(av[i]); j++, k++)
		{
			if (j == (int)strlen(av[i]))
			{
				str[k] = '\n';
				k++;
				break;
			}
			str[k] = av[i][j];
		}
	}
	return (str);
}
