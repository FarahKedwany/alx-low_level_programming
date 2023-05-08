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
	int i, x, y, flag;

	y = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				y++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (y);
		}
	}

	return (0);
}
