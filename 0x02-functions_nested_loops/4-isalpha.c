#include “main.h”
#include <stdio.h>
/**
 * _isalpha - A program that checks for letters
 *
 * @c : intiger character in ASCII
 *
 * Return: 1 if letter , 0 if else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(‘\n’);
}
