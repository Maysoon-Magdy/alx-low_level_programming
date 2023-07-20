#include "main.h"
/**
 * print_numbers - A  function that prints the numbers,
 * from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + 48);
	}
	_putchar('\n');
}
