#include <stdlib.h>

/**
 * create_array - creates array
 * @n: size of array
 * @c: character
 *
 * Return: pointer to char
 */
char *create_array(int n, char c)
{
	char *c_ptr;
	int i;

	if (!n)
		return (NULL);

	c_ptr = (char *) malloc(sizeof(char) * n);

	if (!c_ptr)
		return (NULL);

	for (i = 0; i < n; i++)
		*(c_ptr + i) = c;

	return (c_ptr);
}
