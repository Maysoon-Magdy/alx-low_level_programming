#include"main.h"
/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 2 || x == 4)
			continue;
		else
			_putchar(x + 48);
	}
	_putchar('\n');
}
