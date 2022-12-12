#include <stdio.h>
/**
 * first_func - 1st function needed to run print_buffer
 * @b: buffer
 * @k: int
 * @l: int
 * @i: int
 *
 * Return: void
 */
void first_func(char *b, int k, int l, int i)
{
k = (i / 10) * 10;
for (l = k; l <= i; l++)
{
if (b[l] >= 32 && b[l] <= 126)
putchar(b[l]);
else
putchar('.');
}

putchar(10);
printf("%08x: ", i + 1);
}

/**
 * sec_func - second function needed to run print_buffer
 * @b: buffer
 * @l: int
 * @l_phase: int
 * @size: int
 */
void sec_func(char *b, int l, int l_phase, int size)
{
for (l = l_phase; l <= (l_phase + ((l_phase + 9) - size)); l++)
{
putchar(' ');
putchar(' ');
}
putchar(' ');
putchar(' ');
for (l = l_phase; l < size; l++)
{
if (b[l] >= 32 && b[l] <= 126)
putchar(b[l]);
else
putchar('.');
}
}

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: buffer size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i, j, k, l, z;
int l_phase;

l_phase = z = (size / 10) * 10;
j = 1;
l = k = 0;

for (i = 0; i < size; i++)
{
if (i == 0)
printf("%08x: ", i);
printf("%02x", b[i]);

if (!(j % 2))
putchar(' ');

if (((i % 10 == 9) && i > 0))
{
first_func(b, k, l, i);
}
else if (i == size - 1)
{
sec_func(b, l, l_phase, size);
}
j++;
}
putchar('\n');
if (size == 0)
putchar('\n');
}
