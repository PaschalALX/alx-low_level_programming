#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate memory
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		for (i = 0; i < (int)old_size; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (new_ptr);
}
