#include "main.h"
/**
 * swap_int - function that takes a pointer to an int as parameter and
 * update the value
 * @a: the first value to be swapped
 * @b: the second value to be swapped
 */
void swap_int(int *a, int *b)
{
	int x;
	x = *b;
	*b = *a;
	*a = x;
}
