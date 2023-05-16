#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width.
 * @height: height.
 *
 * Return: if width or height is 0 or negative, return NULL.
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(a + i) = (int *)malloc(width * sizeof(int));
		if (*(a + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = a[i];
				free(p);
			}
			free(a);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			a[l][j] = 0;
		}
	}
	return (a);
}
