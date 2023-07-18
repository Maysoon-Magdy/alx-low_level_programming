#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - A program that prints alphabet using prinf function
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
