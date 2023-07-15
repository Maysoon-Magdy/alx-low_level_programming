#include<stdio.h>

/**
 * main - A program that print the hexa bases
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = 48; /*48; decimal rep of 0*/
while (a <= 102) /*102;decimal rep of f*/
{
putchar(a);
/*after 9 jump to 96;*/
if (a == 57)
a += 39;
a++;
}
putchar('\n');
return (0);
}
