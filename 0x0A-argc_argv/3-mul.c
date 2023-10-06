#include <stdio.h>
#include "main.h"
/**
 * main -  a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2 = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[0]);
	num2 = _atoi(argv[1]);

	printf("%d\n", num1 * num2);
	return (0);
}
