#include "main.h"
/**
 * _memcpy -  a function that copies memory area.
 * @dest: destination array.
 * @src: source array.
 * @n: number of bytes.
 * Return: copied array.
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int y;

	y = n;
	for (i = 0; i < y; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

