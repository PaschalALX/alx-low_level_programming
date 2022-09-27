#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: square ints
 * @size: size of square
 *
 * Return: void;
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum_1, sum_2;
	int end_of_buffer, step;
	int i, k;

	sum_1 = sum_2 = k = 0;
	end_of_buffer = size * size;
	step = size + 1;

	for (i = 0; i < end_of_buffer; i += step)
		sum_1 += a[i];

	for (i = end_of_buffer - size; i >= 0; i -= (size - 1))
	{
		sum_2 += a[i];

		if (k == size - 1)
			break;
		k++;
	}

	printf("%d, %d\n", sum_1, sum_2);
}
