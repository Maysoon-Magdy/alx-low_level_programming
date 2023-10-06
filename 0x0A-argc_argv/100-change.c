#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, res, number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	res = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && number >= 0; i++)
	{
		while (number >= coins[i])
		{
			res++;
			number -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
