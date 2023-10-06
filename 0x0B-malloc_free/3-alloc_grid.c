#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width
 * @height: the height
 *
 * Return: 2 dimentional array.
 */
int **alloc_grid(int width, int height)
{
	int **arr, h, w;

	arr = malloc(sizeof(int) * height);
	if (width <= 0 || height <= 0 || arr == 0)
		return (NULL);

	else
	{
		for (h = 0; h < height; h++)
		{
			arr[h] = malloc(sizeof(int) * width);
			for (w = 0; w < width; w++)
				arr[h][w] = 0;
		}
	}
	return (arr);
}
