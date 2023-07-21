#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: input size
 */
void print_triangle(int size)
{
	int r, y, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = size - r; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (y = 1; y <= r; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
