#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints the number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
