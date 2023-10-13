#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n:the number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int num = n;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);
	while (num--)
		printf("%s%s", (str = va_arg(ptr, char *)) ? str : "(nil"),
			i ? (separator ? separator : "") : '\n');
	va_end(ptr);
}
