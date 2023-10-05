#include "main.h"
/**
 * is_palindrome - define if a string is a plaindrome
 * @s: a string to be evaluated
 *
 * Return: 1 if yes , 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_str_compare(s, 0, _strlen_recursion(s)));
}

int _str_compare(char *s, int start, int end)
{
	if (*(s + start) == *(s + end))
	{
		if (start == end || start == end + 1)
			return (1);
		return (0 + _str_compare(s, start + 1, end - 1));
	}
	return (0);
}

int _strlen_recursion(char *s)
{
	if(*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));		
}
