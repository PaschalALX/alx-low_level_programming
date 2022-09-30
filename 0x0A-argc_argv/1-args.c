#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector of arguments string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
