#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector of arguments string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", *argv);
	return (0);
}
