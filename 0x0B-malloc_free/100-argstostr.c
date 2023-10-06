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
 * argstostr - a function that concatenates all the arguments
 * @ac: input1
 * @av: input2
 *
 * Return: a char
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int num = 0, args = 0, i = 0, j = 0;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < num; i++, num++)
	{
		num += _strlen(av[i]);
	}

	s = malloc(sizeof(char) * num + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < num; i++)
	{
		for (j = 0; av[i][j] != "\0"; j++, args++)
			s[args] = av[i][j];

		s[args] = "\n";
		args++;
	}
	s[args] = "\0";
	return (s);
}
