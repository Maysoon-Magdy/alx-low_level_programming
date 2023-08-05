#include <stdio.h>
/**
 * main -  a program that prints argumnets followed by a new line.
 * @argc: num of inputs
 * @argv:array of charachters
 * Return: always 0 success
 *
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

