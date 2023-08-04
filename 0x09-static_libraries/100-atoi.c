#include "main.h"
#include <stdio.h>
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
