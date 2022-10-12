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

	if (fp)
	{
		while (true)
		{
			c = getc(fp);
			if (i == atoi(argv[1]) - 1)
			{
				printf("%2x", c);
				break;
			}
			printf("%2x ", c);
			i++;
		}
		putchar(10);
		fclose(fp);
	}
}
