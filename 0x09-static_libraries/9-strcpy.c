#include "main.h"
#include <stdio.h>
/**
 * _strcpy -  a function that copies the string
 * @src: the original srting to be copied.
 * @dest: the buffer that we will copy in.
 * Return: pointer to the destination.
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
