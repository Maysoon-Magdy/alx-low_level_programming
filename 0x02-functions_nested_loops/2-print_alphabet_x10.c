#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - A program that prints 10 times
 * the alphabits with line using prinf function
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	char c;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{
		_putchar(c);
		}
	}
}
