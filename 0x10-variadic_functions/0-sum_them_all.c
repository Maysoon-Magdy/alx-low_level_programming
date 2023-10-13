#include "main.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns
 * the sum of all its parameters.
 * @n:count of arguments
 *
 * Return: total summ of inputs integars
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, num = n, i = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i; i < num; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
