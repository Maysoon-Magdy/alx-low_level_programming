#include <stdio.h>
/**
 * main - A program that Write a program that prints all
 * possible combinations of single-digit numbers n.
 **
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

