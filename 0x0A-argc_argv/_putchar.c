#include <stdio.h>
#include "main.h"

/**
 *  _putchar - writes the charachter c to stdout
 *  @c: the charachter
 *
 *  Return: On success 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
