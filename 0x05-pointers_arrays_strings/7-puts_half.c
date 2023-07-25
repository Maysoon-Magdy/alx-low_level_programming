#include "main.h"
#include <stdio.h>
/**
 *puts_half - a function that prints the half of a string
 *@str: the string
 */

void puts_half(char *str)
{
	int i = 0;
	int half;

	while (str[i])
		i++;
	half = i / 2;

	if (i % 2 == 1)
		half++;

	while (str[half])
	{
		printf("%c", *(str + half));
		half++;
	}
	printf("\n");
}
