#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 * @str: string
 *
 * Return: encoded string
*/

char *leet(char *str)
{
	int i;
	int j;
	char leet[] = {'4', '3', '0', '7', '1', '\0'};
	char noleet[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char nooleet[] = {'A', 'E', 'O', 'T', 'L', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == noleet[j] || str[i] == nooleet[j])
			{
				str[i] = leet[j];
			}
		}
	}
	return (str);
}

