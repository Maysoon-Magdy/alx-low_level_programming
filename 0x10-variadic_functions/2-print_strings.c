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
	unsigned int num;
	char *str;
	va_list ptr;

	va_start(ptr, n);

	for (num = 0; num < n; num++)
	{
		str = va_arg(ptr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
