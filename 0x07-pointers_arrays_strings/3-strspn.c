#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: bytes
 *
 * Return: number of bytes.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, x, count;
	char *t;

	count = 0;
	i = 0;
	x = 0;
	t = accept;

	for (; s[i] != '\0'; s++)
	{
		for (; accept[x] != '\0'; accept++)
		{
			if (s[i] == accept[x])
			{
				count++;
			}
		}
		accept = t;
	}
	return (count);
}
