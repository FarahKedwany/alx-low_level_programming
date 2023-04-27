#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal.
 * @n: to be declared
 *
 * Return: Always 0.
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
