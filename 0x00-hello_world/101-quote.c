#include<stdio.h>
/**
 * main - A program that prints line without printf or put
 * Return: Always 1 (Success)
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
return (1);
}

