#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers- a function that prints numbers
 * followed by a new line.
 * @separator:the srting to print
 * @n:number of arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int num = n;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);
	while (num--)
		printf("%d%s", va_arg(ptr, int),
				num ? (separator ? separator : "") : "\n");

	va_end(ptr);

}

