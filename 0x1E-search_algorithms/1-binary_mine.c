#include <stddef.h>
#include <stdio.h>

/**
 * print_search_index - prints searched index of an array
 * @first: first index
 * @last: last index
 */

void print_search_index(int first, int last)
{
	first = first - 1;
	last = last - 1;
	printf("Searching in array:");

	while (first <= last)
	{
		if (first == last)
			printf(" %d", ++first);
		else
			printf(" %d,", ++first);
	}
	putchar(10);
}

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

	if (size == 0 || array == NULL)
		return (-1);
	
	while (1)
	{
		print_search_index(left, right);
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
