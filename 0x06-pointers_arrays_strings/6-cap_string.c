#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string
 *
 * Return: char.
*/

char *cap_string(char *str)
{
	int conversion, i, c;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	conversion = 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] =  str[i] - conversion;
		}
		conversion = 0;
		for (c = 0; chars[c] != '\0'; c++)
		{
			if (chars[c] == str[i])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (str);
}
