#include <stddef.h>
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: he value to search for
 *
 * Return: int
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid = (left + right) / 2;

	while (1)
	{
		if (value == array[mid])
			return (mid);
		if ((mid == left) && (mid == right))
			break;
		if (value > array[mid])
			left = mid + 1;
		else
			right = mid - 1;

		mid = (left + right) / 2;
	}
	return (-1);
}
