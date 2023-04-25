#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks for lowercase character.
 *
 * @c: int to be declared.
 *
 * Return: 0 if uppercase, 1 if lowercase.
 *
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
