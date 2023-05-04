#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat: concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: n bytes.
 *
 * Return: *dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	
	if (j < n)
	{
	dest[i] = '\0';
	}

	return (dest);
}
