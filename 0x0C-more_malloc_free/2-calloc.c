#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_memset - fills memory with a constant byte
 * @arr: memory area to be filled
 * @c: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *arr, char c, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		arr[x] = c;
	}

	return (arr);
}

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: input array
 * @size: size of memb
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	_memset(arr, 0, nmemb * size);
	return (arr);
}

