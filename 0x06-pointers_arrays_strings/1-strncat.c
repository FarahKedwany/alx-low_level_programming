#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat: concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: n bytes.
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < n)
	{
	dest[index] = '\0';
	}
	return (dest);
}
