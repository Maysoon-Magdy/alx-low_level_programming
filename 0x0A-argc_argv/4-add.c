#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * isDigit - function check if char is digit
 * @str: param1
 * Return: 1 if int
 *
 */
int isDigit(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - program that adds positive numbers.
 * @argc: number of prog. arguments.
 * @argv: arguments
 * Return: always 0 - Success
 *
 */
int main(int argc, char *argv[])
{
	int count, x, sum;

	count = 1;
	while (count < argc)
	{
		if (isDigit(argv[count]))
		{
			x = atoi(argv[count]);
			sum += x;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
