#include "main.h"

/**
 *  reverse_array -  a function that compares two strings
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
