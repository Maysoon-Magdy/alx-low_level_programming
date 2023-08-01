#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string.
 * @c: charachter to be located.
 * Return: first char allocated.
 *
 */
char *_strchr(char *s, char c)
{
	int i, y;

	i = 0;
	while (s[i])
		i++;

	for (y = 0; y < i; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
