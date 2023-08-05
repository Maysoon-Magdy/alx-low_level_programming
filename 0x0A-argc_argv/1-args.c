#include <stdio.h>
/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: num of inputs
 * @argv:array of charachters
 * Return: always 0 success
 *
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

