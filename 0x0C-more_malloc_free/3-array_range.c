#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun integer
 * @max: maximum integer
 *
 * Return: int*
 */
int *array_range(int min, int max)
{
	int arr_size, i, j;
	int *ptr;

	if (min > max)
		return (NULL);

	arr_size = (max - min) + 1;

	ptr = malloc(sizeof(int) * arr_size);

	if (!ptr)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		ptr[j] = i;

	return (ptr);
}
