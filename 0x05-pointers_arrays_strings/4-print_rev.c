#include "main.h"
#include <stdio.h>
/**
 * print_rev - a function that prints
 * a string, in reverse, followed by a new line.
 * @s: the string wanted to be reversed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
