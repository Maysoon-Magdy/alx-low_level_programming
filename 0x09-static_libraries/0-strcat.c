#include "main.h"
/**
 * _strcat - a function that concatinate two stringd
 *@dest: first string.
 *@src: second string.
 *Return: always return
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (dest[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
