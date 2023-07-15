#include <stdio.h>
/**
 * main - A program that prints numbers using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
for (a = 48 ; a <= 57 ; ++a)
{
putchar(a);
}
putchar('\n');
return (0);
}
