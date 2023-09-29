#include "main.h"
/**
 * is_prime_number - define if the input integer is a prime number.
 * @n: number to be defined
 *
 * Return: 1 if yes and 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 * is_prime - a function helps in define the prime number
 * @n: the imput number
 * @x: n minus 1
 *
 * Return: 1 if primer 0 if not
 */
int is_prime(int n, int x)
{
	if (x == 1)
		return (1);
	else if (n % x == 0 && x > 0)
		return (0);
	else
		return (is_prime(n, x - 1));
}
