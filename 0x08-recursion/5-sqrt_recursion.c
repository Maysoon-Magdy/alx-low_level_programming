#include "main.h"
#include<stdio.h>
#include<math.h>
/**
 * square_root_guesser - a function to guess the root
 * @num: the number
 * @guess: the guessed number
 * @error: error percentage
 * Return: the root number
 *
 */

double square_root_guesser(double num, double guess, double error)
{
	double new_guess = (guess + num / guess) / 2;

	if (fabs(new_guess - guess) < error)
	{
		return (new_guess);
	}
	else
	{
		return (square_root_guesser(num, new_guess, error));
	}
}

/**
 * _sqrt_recursion - main root function
 * @n: number
 * Return: final root
 *
 */

int _sqrt_recursion(int n)
{
	double guess = (double)n / 2;
	double error = 0.00001;

	if (n < 0)
		return (-1);
	else
		return ((int)square_root_guesser(n, guess, error));
}

