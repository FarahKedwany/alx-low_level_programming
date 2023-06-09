#include <stdio.h>
#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: constant byte.
 * @n: number of bytes to be filled with b.
 *
 * Return: s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *tmp = s;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (tmp);
}
