#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: begin of the concatination
 *
 * Return: pointer to the newly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int length1 = 0, length2 = 0, i = 0, j = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;


	if (n > length2)
		s = malloc(sizeof(char) * (length1 + length2 + 1));
	else if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));

	if (s == NULL)
		return (NULL);

	while (i < length1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < length2 && i < (length1 + n))
		s[i++] = s2[j++];
	while (n >= length2 && i < (length1 + length2))
		s[i++] = s2[j++];

	s[i] = '\0';
	return (s);
}
