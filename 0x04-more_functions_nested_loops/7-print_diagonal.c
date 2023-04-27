#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line.
 * @n: to be declared.
 *
 * Return: Always 0.
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar ('\');
	}
	_putchar ('\n');
}
