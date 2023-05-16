#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a
 * copy of the string given as a parameter.
 * @str: string.
 *
 * Return: pointer or NULL.
 */

char *_strdup(char *str)
{
	char *s = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	s = (char *)malloc(n + 1 * sizeof(char));
	if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			s[i] = str[i];
	} else
	{
		return (NULL);
	}
	s[i] = '\0';
	return (s);
}
