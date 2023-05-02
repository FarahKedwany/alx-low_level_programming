#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: string to be reversed.
 *
*/

void print_rev(char *s)
{
	int i = 0;

	while (i != '\0')
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
