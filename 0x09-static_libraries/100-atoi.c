#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_int_index_and_sign - Gets the starting index of number
 * @str: string
 * @is_negative_flag: boolean
 *
 * Return: int
 */
int get_int_index_and_sign(char *str, int *is_negative_flag)
{
	int index, size_of_str, i;
	int sign1, sign2;

	index = -1;
	size_of_str = strlen(str) + 1;
	*is_negative_flag = 0;

	if (str[0] >= '0' && str[0] <= '9')
		index = 0;
	else
	{
		for (i = 0; i < size_of_str; i++)
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				index = i;
				break;
			}
		}
	}

	/**
	 * The following code helps determine the sign (+ or -)
	 */
	sign2 = 1;

	if (index > 0)
	{
		for (i = (index - 1); i >= 0; i--)
		{
			sign1 = str[i] == '-' ? -1 : 1;
			sign2 = sign2 * sign1;
		}
	}
	if (sign2 < 0)
		*is_negative_flag = 1;

	return (index);
}

/**
 * string_parser - Filter string to remove unwanted characters
 * @str: string
 * @start_idx: starting index
 *
 * Return: char *
 */
char *string_parser(char *str, int start_idx)
{
	char *parsed_str;
	int str_size, i, j;

	j = 0;
	str_size = strlen(str) + 1;
	parsed_str = (char *) malloc(str_size);

	for (i = start_idx; ((str[i] >= '0' && str[i] <= '9')); i++)
	{
		*(parsed_str + j) = str[i];
		j++;
	}
	*(parsed_str + (j)) = '\0';

	return (parsed_str);
}

/**
 * get_place_value - gets place value of string number
 * @str: string
 *
 * Return: int
 */
int get_place_value(char *str)
{
	int pv, i;

	pv = 1;
	for (i = 1; str[i]; i++)
	{
		pv *= 10;
	}

	return (pv);
}

/**
 * exec - Does the main execution
 * @str: parsed string
 * @place_value: place value in int
 * @idx: starting index
 *
 * Return: int
 */
int exec(char *str, int place_value, int idx)
{
	unsigned int num;
	int digit, i;

	digit = -1;
	num = 0;
	for (i = '0'; i <= '9'; i++)
	{
		digit++;
		if (str[idx] == i)
			break;
	}
	if (!(place_value / 10))
	{
		num = digit;

		return (num);
	}
	else
	{
		num = digit * place_value;
		place_value /= 10;
		idx++;

		return (num + exec(str, place_value, idx));
	}
}

/**
 * _atoi - ascii to int
 * @str: string
 *
 * Return: int
 */
int _atoi(char *str)
{
	int is_negative_flag, start_idx, place_value;
	unsigned int num;
	char *parsed_str;

	start_idx = get_int_index_and_sign(str, &is_negative_flag);
	if (start_idx == -1)
		return (0);

	parsed_str = string_parser(str, start_idx);
	place_value = get_place_value(parsed_str);

	num = exec(parsed_str, place_value, 0);

	return (is_negative_flag ? -num : num);
}
