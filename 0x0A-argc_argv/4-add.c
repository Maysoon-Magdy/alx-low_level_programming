#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
/**
 * ifNumber - a function checks if input is number
 * @str: input string
 *
 * Return: always[0]
 */
int ifNumber(char *str)
{
	unsigned int size;

	size = 0;
	while (size < strlen(str))
	{
		if (!isdigit(str[size]))
			return (0);
		size++;
	}
	return (1);
}
/**
 * main - a program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int size;
	int str_to_int;
	int res;

	res = 0;
	size = 1;

	while (size < argc)
	{
		if (ifNumber(argv[size]))
		{
			str_to_int = _atoi(argv[size]);
			res += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		size++;
	}
	printf("%d\n", res);
	return (0);
}
