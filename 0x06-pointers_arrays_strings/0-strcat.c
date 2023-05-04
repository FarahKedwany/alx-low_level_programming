#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings.
 * @dest: destination string.
 * @src: Source string.
 *
 * Return: Concatenated string.
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
