#include "main.h"
/**
 *_sqrt_recursion -  returns the natural square root of a number.
 * @n: number
 *
 * Return: square of n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - helper function
 * @n: input number
 * @expected: expected right value
 *
 * Return: returned square
 */
int square(int n, int expected)
{
	if (expected * expected == n)
		return (expected);
	else if (expected * expected < n)
		return (square(n, expected + 1));
	else
		return (-1);
}
