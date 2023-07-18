#include <stdio.h>
/**
 * main - A program that Write a program that prints all
 * possible combinations of two-digit numbers n.
 **
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c;
for (a = '0'; a <= '9'; a++)
{
for (b = '1'; b <= '9'; b++)
{
for (c = '2'; c <= '9'; c++)
{
if (a == b || a == c || b == c || a > b || a > c || b > c)
continue;
putchar(a);
putchar(b);
putchar(c);
if (a == '7' && b == '8' && c == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

