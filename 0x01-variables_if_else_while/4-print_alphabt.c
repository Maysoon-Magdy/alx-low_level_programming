#include <stdio.h>
/**
 * main - A program that prints characters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
char q = 'q';
char e = 'e';
for (a = 'a' ; a <= 'z' ; ++a)
{
if (a == q || a == e)
{
++a;
}
putchar(a);
}
putchar('\n');
return (0);
}
