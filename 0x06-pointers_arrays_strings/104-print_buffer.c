#include <stdio.h>

/**
 * println - Prints single line
 * @b: buffer
 * @len: length of string
 * @start: starting position of each line
 *
 * Return: void
 */
void println(char *b, int len, int start)
{
	int i;

	printf("%08x: ", start);
	for (i = start; i <= start + 9; i++)
	{
		if (len < 9 && i > start + len)
			printf("  ");
		else
			printf("%02x", b[i]);
		if (i % 2)
			putchar(' ');
	}

	for (i = start; i <= start + len; i++)
	{
		if (b[i] >= 32 && b[i] <= 126)
			putchar(b[i]);
		else
			putchar('.');
	}
	printf("\n");
}

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
		putchar(10);

	for (i = 0; i < size; i++)
	{
		if (!(i % 10) && !(i >= (size / 10) * 10))
		{
			println(b, 9, i);
		}
		else if (i >= (size / 10) * 10)
		{
			println(b, size - i - 1, i);
			break;
		}
	}
}
