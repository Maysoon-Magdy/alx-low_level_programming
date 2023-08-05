#include <stdio.h>
#include "main.h"
/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: num of inputs
 * @argv:array of charachters
 * Return: always 0 success
 *
 */
int main(int args, char *argv[])
{
	int num1, num2, mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
