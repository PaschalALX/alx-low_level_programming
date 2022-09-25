#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * char_to_int - converts single character to integer
 * @c: single character
 *
 * Return: int
 */
int char_to_int(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (c);

	return (c - 48);
}

/**
 * int_to_char - converts single integer to character
 * @n: single integer
 *
 * Return: char
 */
char int_to_char(int n)
{
	if (n >= 0 && n <= 9)
		return (48 + n);

	return (48);
}

/**
 * rev_char_array - reverses a string (array string)
 * @str: string to be reversed
 *
 * Return: char*
 */
char *rev_char_array(char *str)
{
	int str_len = (int) strlen(str);
	char temp;
	int i = 0;

	for (; i < str_len / 2; i++)
	{
		temp = str[i];
		str[i] = str[str_len - i - 1];
		str[str_len - i - 1] = temp;
	}

	return (str);
}

/**
 * update_temp_buffer - Updated temporary buffer
 * @temp_b: temporary buffer
 * @n1: string of numbers 1
 * @n2: string of numbers 2
 * @n1_lastidx: last index of n1
 * @n2_lastidx: last index of n2
 *
 * Return: char *
 */
char *update_temp_buffer(char *temp_b,
			char *n1,
			char *n2,
			int n1_lastidx,
			int n2_lastidx)
{
	int i, j, k, sum, overflow;

	sum = overflow = 0;

	for (k = 0, i = n1_lastidx, j = n2_lastidx; k < 101; k++, i--, j--)
	{
		sum += overflow;
		if (i >= 0)
			sum += char_to_int(n1[i]);

		if (j >= 0)
			sum += char_to_int(n2[j]);

		if (i < 0 && j < 0 && !overflow)
		{
			temp_b[k] = '\0';
			break;
		}

		overflow = sum / 10;
		sum %= 10;
		temp_b[k] = int_to_char(sum);
		sum = 0;
	}

	return (temp_b);
}

/**
 * infinite_add - infinite add
 * @n1: string of numbers 1
 * @n2: string of numbers 2
 * @r: buffer
 * @size_r: size of buffer
 *
 * Return: char *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len, n1_lastidx, n1_size;
	int n2_len, n2_lastidx, n2_size;
	char temp_b[101];

	n1_len = strlen(n1);
	n1_lastidx = n1_len - 1;
	n1_size = n1_len + 1;

	n2_len = strlen(n2);
	n2_lastidx = n2_len - 1;
	n2_size = n2_len + 1;

	if (size_r < n1_size || size_r < n2_size)
		return (0);

	strcpy(temp_b, update_temp_buffer(temp_b, n1, n2, n1_lastidx, n2_lastidx));

	if (size_r < (int)strlen(temp_b) + 1)
		return (0);

	rev_char_array(temp_b);
	strcpy(r, temp_b);
	return (r);
}
