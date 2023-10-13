#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const chaR * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list ptr;

	va_start(ptr, format);

	if (ptr)
	{
		while (ptr[i])
		{
			switch (ptr[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ptr, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ptr, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ptr, double));
					break;
				case 's':
					str = va_arg(ptr, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ptr);
}
