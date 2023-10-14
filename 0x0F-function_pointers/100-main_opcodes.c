#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, digit;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	digit = atoi(argv[1]);

	if (digit < 0)
	{
		printf("Error\n");
		exit(2);
	}

	str = (char *)main;

	for (i = 0; i < digit; i++)
	{
		if (i == digit - 1)
		{
			printf("%02hhx\n", str[i]);
			break;
		}
		printf("%02hhx", str[i]);
	}
}
