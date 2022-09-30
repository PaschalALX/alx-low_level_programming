#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - checks if str is a number
 * @s: num string
 *
 * Return: int
 */
int is_num(char *s)
{
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return (0);

		s++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector of arguments string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int are_nums, size, sum, i;

	are_nums = 1;
	size = argc - 1;
	sum = 0;

	for (i = 1; i <= size; i++)
	{
		if (!is_num(argv[i]))
			are_nums = 0;
	}

	if (are_nums)
	{
		for (i = 1; i <= size; i++)
			sum += atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);
	return (0);

}
