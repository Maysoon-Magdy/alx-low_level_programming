#include "main.h"

/**
 * _strlen_recursion - Return string length of a string
 * @s: the string
 *
 * Return:  String length
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
