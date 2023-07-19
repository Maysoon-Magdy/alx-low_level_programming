#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - A  function that prints the last digit of a number.
 *
 * @i : intiger character in ASCII
 *
 * Return: last degit of a number
 */
int print_last_digit(int i)
{
	int x;

	x = i % 10;
	if (i < 0)
	{
	_putchar((-x) + '0');
	return (-x);
	}
	else
	{
	_putchar(x + '0');
	return (x);
	}
	_putchar('\n');
}

