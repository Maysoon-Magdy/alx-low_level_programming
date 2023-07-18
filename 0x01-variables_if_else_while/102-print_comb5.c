#include <stdio.h>
/**
 * main - A program that Write a program that prints all
 * possible combinations of two two-digit numbers n.
 **
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, d;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
for (c = '0'; c <= '9' ; c++)
{
for (d = '0' ; d <= '9' ; d++)
{
if ((a == c && b == d) || (a == c && b > d)
|| (b == d && a > c) || (a > c && b > d))
continue;
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a == '9' && b == '8' && 'c' == '9' && 'd' == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
