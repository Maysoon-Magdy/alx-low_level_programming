#include "main.h"
/**
 * _strstr - function
 * @haystack: p1
 * @needle: p2
 * Return: return success
 *
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

	}
	return (0);
}
