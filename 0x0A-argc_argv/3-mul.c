#include <stdio.h>
#include "main.h"
/**
 * _atoi - a function that convert a string to an integer.
 * @s:the string wanted to be converted.
 * Return: the converted integer.
 */
int _atoi(char *s)
{
        unsigned int number = 0;
        int sign = 1;

        do {
                if (*s == '-')
                        sign = sign * -1;
                else if (*s >= '0' && *s <= '9')
                        number = (number * 10) + (*s - '0');
                else if (number > 0)
                        break;
        } while (*s++);
        return (number * sign);
}
/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: num of inputs
 * @argv:array of charachters
 * Return: always 0 success
 *
 */
int main(int argc, char *argv[])
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
