#include <stdio.h>

/**
 * swap_int - Swap a for b and b for a
 * @a: a int parameter
 * @b: b int parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
