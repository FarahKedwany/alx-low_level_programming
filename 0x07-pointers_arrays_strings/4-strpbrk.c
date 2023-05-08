#include <stdio.h>
#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: string 1
 * @accept: string 2.
 *
 * Return:  a pointer to the byte in s that matches one of the bytes 
 * in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int x;

	for (i = 0; *s != '\0'; i++)
	{
		for (x = 0; *accept != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
