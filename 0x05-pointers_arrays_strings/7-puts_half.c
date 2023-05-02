#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: string.
 *
*/

void puts_half(char *str)
{
	int length = 0;
	int n, i;

	while (str[length] != '\0')
	{
		length++;
	}
	n = (length - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
