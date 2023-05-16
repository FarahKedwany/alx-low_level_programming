#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * size: size of char.
 * c: Character
 *
 * Return: NULL if size = 0 or pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
