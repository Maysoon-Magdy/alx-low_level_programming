#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - A function that allocates memory.
 * @b: memory to be assigned
 *
 * Return: A pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
