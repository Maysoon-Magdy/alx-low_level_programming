#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, size = 0;
	char *s;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	for (; s1[size1] != '\0'; size1++)
		;
	for (; s2[size2] != '\0'; size2++)
		;

	size = size1 + size2;

	s = (char *)malloc(size * sizeof(char) + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else
			s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);
}
