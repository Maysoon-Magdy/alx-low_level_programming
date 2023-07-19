#include<stdio.h>
/**
 * print_to_98- check the code
 *
 * @n : integer input
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				putchar('\n');
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				putchar('\n');
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
