#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: vector of arguments.
 *
 * Return: 0 if no arguments, 1 if contains symbols
 * not digits, sum if success.
 */

int main(int argc, char **argv)
{
	int i, j, length;
	int sum = 0;

	if (argc - 1 < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
