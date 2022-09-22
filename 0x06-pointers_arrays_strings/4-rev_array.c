#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array og ints
 * @n: int
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++, end--;
	};
}
