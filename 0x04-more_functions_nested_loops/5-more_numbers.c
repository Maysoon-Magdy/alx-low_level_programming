#include"main.h"
/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int x, y, z;

	for (y = 0; y < 10; y++)
	{
		z = 0;
		for (x = 0; x <= 14; x++)
		{
			if (x < 10)
			{
				_putchar(x + 48);
			}
			else
			{
				_pucthar(49);
				_putchar(z + 48);
				z++;
			}
		}
		_pucthar('\n');
	}
}
