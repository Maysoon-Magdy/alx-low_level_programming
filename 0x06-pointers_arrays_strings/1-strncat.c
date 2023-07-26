#include "main.h"
#include <stdio.h>
/**
 * _strncat -  a function that concatenates
 * two strings with linited charachters.
 * @dest: the destination string
 * @src: the added string
 * @n: number of digits llowed in the source string
 * Return: concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
