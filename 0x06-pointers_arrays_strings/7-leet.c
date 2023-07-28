#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @n: string
 * Return: n
 */
char *leet(char *n)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	int i, j;

	i = 0;
	while (n[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
			}
		}
		i++;
	}

	return (n);
}
