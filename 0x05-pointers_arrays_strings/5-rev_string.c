#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: character in string.
 *
*/

void rev_string(char *s)
{
	int i, j, c = 0, k;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	k = c - 1;
	j = k;

	for (i = 0; i < j; i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
		k--;
	}
}
