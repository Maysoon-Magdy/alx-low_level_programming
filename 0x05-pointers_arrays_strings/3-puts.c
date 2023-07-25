#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: the string we want to print
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		printf("%c", str[i])
			i++;
	}
	printf("\n");
}
