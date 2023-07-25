#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function that prints %2 strings
 * @str: the string
 */
void puts2(char *str)
{
	int i = 0;
	int f = 0;

	while (str[i])
		i++;
	while (f < i)
	{
		if (f % 2 == 0)
		printf("%c", *(str + f));
	f++;
	}
	printf("\n");
}
