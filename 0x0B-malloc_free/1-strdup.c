#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  a function that returns a pointer to a new memory place.
 * @str: Memory for the new string
 *
 * Return: a pointer to a new string
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
		return (NULL);

	s = (char *)malloc(size * sizeof(str));

	if (s == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < sizeof(str); i++)
			s[i] = str[i];
	}

	return (s);
}
