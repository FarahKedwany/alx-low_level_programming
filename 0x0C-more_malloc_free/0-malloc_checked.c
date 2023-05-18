#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * malloc_checked - Description.
 * @b: to be declared.
 *
 * Return: returns a pointer to allocated memory,
 * if malloc fails, the malloc_checked function should
 * cause normal process termination
 * with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
