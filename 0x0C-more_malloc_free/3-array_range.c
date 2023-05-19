#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * array_range - Description.
 * @min: to be declared
 * @max: to be declared
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
