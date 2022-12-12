#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * error_checks - Checks for errors
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
void error_checks(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < (int)strlen(argv[1]); i++)
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (i = 0; i < (int)strlen(argv[2]); i++)
	{
		if (!(argv[2][i] >= '0' && argv[2][i] <= '9'))
		{
			printf("Error\n");
			exit(98);
		}
	}
}

/**
 * __atoi - convert ascii char to int
 * @c: ascii char
 *
 * Return: int
 */
int __atoi(char c)
{
	return (c - '0');
}

/**
 * __itoa - converts int to ascii char
 * @i: integer
 *
 * Return: char
 */
char __itoa(int i)
{
	return ('0' + i);
}

/**
 * rev - reverse string
 * @str: string to reverse
 *
 * Return: char*
 */
char *rev(char *str)
{
	int start, end, tmp;

	start = 0;
	end = strlen(str) - 1;

	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++, end--;
	}
	return (str);
}

/**
 * exec - executes main instructions
 * @shorter: shorter argument
 * @longer: longer argument
 * @buf_len: buffer length
 * @buf: buffer
 *
 * Return: void
 */
void exec(char *shorter, char *longer, int buf_len, char *buf)
{
	int i, j, k, l, of, mul, sum, sof;

	mul = of = sof = sum = k = l = 0;
	for (i = strlen(shorter) - 1; i >= 0; i--)
	{
		for (j = strlen(longer) - 1; k < buf_len; j--, k++)
		{
			if (j >= 0)
				mul = __atoi(shorter[i]) * __atoi(longer[j]);

			mul += of;
			of = mul / 10;

			if (mul == 0 && sof == 0 && j < 0)
				break;

			if (!(buf[k] >= '0' && buf[k] <= '9'))
				buf[k] = '0';

			sum += sof;
			sum += __atoi(buf[k]) + (mul % 10);
			sof = sum / 10;
			buf[k] = __itoa(sum % 10);
			sum = mul = 0;
		}
		if (i == 0 && j < 0 && sof == 0 && of == 0)
			buf[k] = '\0';

		l++;
		of = sof = 0;
		k = l;
	}
	printf("%s\n", rev(buf));
	free(buf);
}

/**
 * check_zeros - checks for zeros
 * @a: first string
 * @b: second string
 *
 * Return: void
 */
void check_zeros(char *a, char *b)
{
	int i = 0;
	int flag1 = 1;
	int flag2 = 1;

	for (i = 0; i < (int) strlen(a); i++)
	{
		if (a[i] != '0')
		{
			flag1 = 0;
			break;
		}
	}
	for (i = 0; i < (int) strlen(b); i++)
	{
		if (b[i] != '0')
		{
			flag2 = 0;
			break;
		}
	}
	if (flag1 || flag2)
	{
		printf("0\n");
		exit(0);
	}
}
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	char *buf, *longer, *shorter;
	int buf_len;

	error_checks(argc, argv);
	check_zeros(argv[1], argv[2]);

	if (strlen(argv[1]) >= strlen(argv[2]))
	{
		longer = argv[1];
		shorter = argv[2];
	}
	else
	{
		longer = argv[2];
		shorter = argv[1];
	}

	buf_len = (int) strlen(longer) + strlen(shorter) + 1;
	buf = malloc(sizeof(char) * buf_len);

	exec(shorter, longer, buf_len, buf);
	return (0);
}
