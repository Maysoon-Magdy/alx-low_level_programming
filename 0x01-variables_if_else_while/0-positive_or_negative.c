#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A This program will assign a random
 * number to the variable n each time it is executed
 **
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%lu is zero\n", n);
else if (n < 0)
printf("%lu is negative\n", n);
else if (n > 0)
printf("%lu is positive\n", n);
return (0);
}

