#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - A function that allocates memory.
 * @b: memory to be assigned
 *
 * Return: A pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (b == 0)
	{
		exit(98);
	}
	return (mem);
}
