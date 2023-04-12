#include <stddef.h>
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: he value to search for
 *
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while ((size_t)i < size)
	{
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
