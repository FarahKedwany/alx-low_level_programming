#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * int _islower(int c) - checks for lowercase character.
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
