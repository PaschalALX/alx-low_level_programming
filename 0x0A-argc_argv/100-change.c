#include <stdio.h>
#include <stdlib.h>

/**
 * num_of_coins - number of coins
 * @sum: Amount
 *
 * Return: int
 */
int num_of_coins(int sum)
{
	int num;

	if (sum <= 0)
		return (0);

	if (sum / 25)
	{
		num = sum / 25;
		return (num + num_of_coins(sum - (num * 25)));
	}
	else if (sum / 10)
	{
		num = sum / 10;
		return (num + num_of_coins(sum - (num * 10)));
	}
	else if (sum / 5)
	{
		num = sum / 5;
		return (num + num_of_coins(sum - (num * 5)));
	}
	else if (sum / 2)
	{
		num = sum / 2;
		return (num + num_of_coins(sum - (num * 2)));
	}
	else if (sum / 1)
	{
		num = sum / 1;
		return (num + num_of_coins(sum - (num * 1)));
	}
	return (0);
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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", num_of_coins(atoi(argv[1])));
	return (0);

}
