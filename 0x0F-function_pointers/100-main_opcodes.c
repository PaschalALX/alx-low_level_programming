#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int (*main_address)(int, char**) = main;
	int i;
	unsigned char c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;

	while (true)
	{
		c = *(unsigned char *)main_address;

		if (i == atoi(argv[1]) - 1)
		{
			printf("%02x", c);
			break;
		}
		printf("%02x ", c);
		i++;
		main_address++;
	}
	putchar(10);

	return (0);
}
