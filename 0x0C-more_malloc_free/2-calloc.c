#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: no. of elements
 * @size: bytes of each
 *
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (int)(nmemb * size); i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
