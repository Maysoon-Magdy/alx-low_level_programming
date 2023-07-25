#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverse a string
 * @s: the string we eant to reverse
 */
void rev_string(char *s)
{    
int i , x , y = 0;
char temp;
while (s[i])
i++;
y = i / 2 ;
while (y--)
{ 
temp = s[i - x - 1];
s[i - x - 1] = s[x];
s[x] = temp ;
x++;
}       
printf("\n");
}
