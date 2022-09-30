#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector of arguments string
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
