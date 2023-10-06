#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - a function to get strinf length
 * @str: string
 *
 * Return: string size
 */
int _strlen(char *str)
{
	int size = 0;

	for (; str[size] != '\0'; size++)
		;
	return (size);
}

/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *s;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	s = (char *)malloc((size1 + size2) * sizeof(char) + 1);

	if (s == 0)
		return (0);

	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else
			s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);
}
