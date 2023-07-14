#include<stdio.h>
/**
 * main - Aprogram that prints the size of various types on the
 * computer it is compiled and run on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long c;
long long int d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned char) sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned int) sizeof(b));
printf("Size of a long: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long long int) sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}
