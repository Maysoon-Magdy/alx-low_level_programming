#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name
 * @argc: number of input arguments
 * @argv: an array of inputs
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
