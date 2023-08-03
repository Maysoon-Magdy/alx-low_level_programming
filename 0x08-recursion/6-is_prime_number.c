#include "main.h"
/**
 * _is_prime_number - helper function
 * @n: parameter
 * @i: n-1
 * Return: 1 if prime 0 if not
 *
 */
int _is_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (_is_prime_number(n, i - 1));
		}
	}
}

/**
 * is_prime_number - a function tells if number is prime
 * @n: input number
 * Return: 1 if number is prime 0 if anything else
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_is_prime_number(n, n - 1));
}
