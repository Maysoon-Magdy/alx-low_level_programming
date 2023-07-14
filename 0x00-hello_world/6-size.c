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
printf("Size of a char:" + sizeof(a) + "byte(s)\n");
printf("Size of a char:" + sizeof(b) + "byte(s)\n");
printf("Size of a char:" + sizeof(c) + "byte(s)\n");
printf("Size of a char:" + sizeof(d) + "byte(s)\n");
printf("Size of a char:" + sizeof(f) + "byte(s)\n");
return (0);
}
