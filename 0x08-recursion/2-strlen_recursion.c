#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string
 * Return: length of the supplied string
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		while (s[i] != '\0')
		{
			i++;
			_strlen_recursion(s - 1);
		}
	}
	return (i);
}