#include "main.h"
#include <stdio.h>
/**
 * _abs - A function that computes the absolute value of an integer
 *
 * @i : intiger character in ASCII
 *
 * Return: the unput without -
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
