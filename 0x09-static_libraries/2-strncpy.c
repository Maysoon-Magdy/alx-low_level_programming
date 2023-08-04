#include "main.h"
/**
 * _strncpy -  a function that copy a string
 * @dest: the destination string
 * @src: the added string
 * @n: number of digits llowed in the source string
 * Return: concatinated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
