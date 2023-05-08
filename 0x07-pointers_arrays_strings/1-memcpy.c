#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes
 *
 * Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *tmp = dest;
	char x;

	while (i < n)
	{
		x = *src;
		*dest = x;
		i++;
		src++;
		dest++;
	}
	return (tmp);
}

