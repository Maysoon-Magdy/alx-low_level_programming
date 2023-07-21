#include "main.h"
/**
 * print_line - a function that draws a straight line
 * @n: integer represents line length
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
