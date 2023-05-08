#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to find
 *
 * Return: c or NULL.
*/

char *_strchr(char *s, char c)
{
	int i;

		while (1)
		{
			i = *s++;
			if (i == c)
			{
				return (s - 1);
			}
			if (i == 0)
			{
				return (NULL);
			}
		}
}
