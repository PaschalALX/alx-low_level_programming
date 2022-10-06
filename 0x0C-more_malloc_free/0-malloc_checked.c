#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: buffer size
 *
 * Return: void *
 */
void *malloc_checked(unsigned int b)
{
	void *m_ptr;

	m_ptr = malloc(b);

	if (m_ptr == NULL)
		exit(98);

	return (m_ptr);
}

