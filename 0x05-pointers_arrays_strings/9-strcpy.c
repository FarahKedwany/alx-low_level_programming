#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: to be declared.
 *@dest: to be declared.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
