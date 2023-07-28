#include "main.h"
#include <stdio.h>
/**
 * cap_string - A function that capitalizes all words
 * @n: the string
 * Return: n as string after doing the capi.
 */

char *cap_string(char *n)
{
int i;

i = 0;
while (n[i])
{
while (!(n[i] >= 'a' && n[i] <= 'z'))
i++;
if (n[i - 1] == ' '
|| n[i - 1] == '\t'
|| n[i - 1] == '\n'
|| n[i - 1] == ','
|| n[i - 1] == ';'
|| n[i - 1] == '.'
|| n[i - 1] == '!'
|| n[i - 1] == '?'
|| n[i - 1] == '"'
|| n[i - 1] == '('
|| n[i - 1] == ')'
|| n[i - 1] == '{'
|| n[i - 1] == '}'
|| i == 0)
n[i] -= 32;
i++;
}
return (n);
}
