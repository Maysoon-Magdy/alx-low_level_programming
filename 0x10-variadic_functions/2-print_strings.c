#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @separator: to be printed between numbers
 * @n: the number of integers passed
 * @...: A variable number of number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list str;
        unsigned int i;

        va_start(str, n);

        for (i = 0; i < n; i++)
       {
	       if (str == NULL)
		       printf("(nil)");
	       else
                printf("%s", va_arg(str, char *));

                if (i != (n - 1) && separator != NULL)
                        printf("%s", separator);
        }
        printf("\n");

        va_end(str);
}
