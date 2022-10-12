#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	FILE *fp;
	char c;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	fp = fopen(__FILE__, "r");

	while (i <= atoi(argv[1]))
	{
		c = getc(fp);
		printf("%2x ", c);
		i++;
	}
	putchar(10);
	fclose(fp);
}
