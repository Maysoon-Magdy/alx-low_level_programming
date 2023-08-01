#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: parameter1
 * @accept: parameter2
 * Return: reruened size.
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (i);
		}
	s++;
	}
	return ('\0');
}
