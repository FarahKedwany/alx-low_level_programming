#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: character in string.
 *
*/

void rev_string(char *s)
{
	int a, len;

	char *i, *n = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
		n++;
	}
	len = a + 1;
	i = s;
	for (a = 0; a < len / 2; a++)
	{
		char x;
		x = *n;
		*n = *i;
		*i = x;
		i++;
		n--;
	}
	s[len + 1] = '\0';
