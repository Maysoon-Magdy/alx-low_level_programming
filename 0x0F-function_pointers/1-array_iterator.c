#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a
 * function given as a parameter
 * @array:array
 * @size:number of array elements
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

