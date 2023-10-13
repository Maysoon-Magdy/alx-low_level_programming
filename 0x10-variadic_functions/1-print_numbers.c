#include "main.h"
/**
 * print_strings - a function that prints numbers
 * followed by a new line.
 * @separator:the srting to print
 * @n:number of arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	av_list ptr;
	int num = n;

	if (!n)
	{
		printf("\n");
		return (0);
	}

	av_start(ptr, n)
	while (num--)
		printf("%d%s", av_arg(ptr, int);
				num ? (separator ? seprator : "") : "\n");

	av_end(ptr);

}

