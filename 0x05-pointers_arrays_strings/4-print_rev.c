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
	unsigned char len;
	char *p;

	while (s[len] != '\0')
	{
		len ++;
	}

	p = s + len - 1;

	while (p >= s)
	{
		_putchar (*p);
		p--;
	}

	_putchar ('\n');
}
