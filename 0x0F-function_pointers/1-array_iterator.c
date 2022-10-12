#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: array of int
 * @size: size of array
 * @action: action to be executed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
