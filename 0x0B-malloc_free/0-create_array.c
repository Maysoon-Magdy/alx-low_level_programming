#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: size of the array
 * @c: the intialization
 *
 * Return: returns a pointer charachter
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(size);

	if (size == 0 || p == NULL)
		return (NULL);

	while (size--)
		p[size] = c;

	return (p);
}
