#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic characters.
 * @c: char to be declared.
 *
 * Return: 1 if c is a letter, 0 if c is anythign else.
*/

int _isalpha(int c)
{
	if (c == [a..z] || c == [A..Z])
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
