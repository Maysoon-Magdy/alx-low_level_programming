#include "main.h"
#include<stdio.h>
/**
 * main - A program that create print char followed by a new line
 * *
 * return - Always 0 - (Success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
