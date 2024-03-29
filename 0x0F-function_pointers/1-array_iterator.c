#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given.
 * @array: the input array
 * @size: the size of the array
 * @action: a pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
