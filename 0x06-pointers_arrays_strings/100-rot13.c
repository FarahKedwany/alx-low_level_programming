#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @rot: string
 *
 * Return: string in rot13
*/

char *rot13(char *rot)
{
	int i;
	int j;
	char before[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char after[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijkl";

	for (i = 0; rot[i] != '\0'; i++)
	{
		for (j = 0; before[j] != '\0'; j++)
		{
			if (rot[i] == before[j])
			{
				rot[i] = after[j];
				break;
			}
		}
	}
	rot[i] = '\0';
	return (rot);
}
