#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array
 * of integers, followed by a new line.
 * @a: the array
 * @n: the number of elements in the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", *(a + i));
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
