#include <stdio.h>
#include "main.h"
/**
 * main -  program that prints all arguments
 * @argc: number of argumnets
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
