#include "main.h"
/**
 * factorial - Returns the factorial of a number
 * @n: the number
 *
 * Return: the factorial number
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
