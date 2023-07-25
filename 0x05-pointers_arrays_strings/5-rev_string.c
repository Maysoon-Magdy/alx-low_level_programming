#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverse a string
 * @s: the string we eant to reverse
 */
void rev_string(char *s)
{
int i, l, h;
char temp;

while (s[l])
l++;
i = 0;
h = l / 2;
while (h--)
{
temp = s[l - i - 1];
s[l - i - 1] = s[i];
s[i] = temp;
i++;
}
}
