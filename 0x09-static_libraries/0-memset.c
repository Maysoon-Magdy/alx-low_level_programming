#include "main.h"
/**
* _memset - a function that fills memory with a constant byte.
* @s: parameter
* @b: parameter
* @n: parameter
*
* Return: Always 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
