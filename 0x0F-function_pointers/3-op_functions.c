#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the sub of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sub of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the mult. of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: mult. of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function div of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: div two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function modlus of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: mod  two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
