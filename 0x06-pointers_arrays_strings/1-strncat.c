#include "main.h"
#include <stdio.h>
/**
 * _strncat -  a function that concatenates two strings with linited charachters.
 * @dest: the destination string
 * @src: the added string
 * @n: number of digits llowed in the source string
 * Return: concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		if (i <  n)
		i++;
	}

	j = 0;
	while (dest[j] != '\0')
	{
		dest[n] = src[j];
		j++;
	}
	dest('\0');
	return (dest);
}
