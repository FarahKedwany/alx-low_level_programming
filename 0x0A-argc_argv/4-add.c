#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i;
	int sum = 0;

	if (argc - 1 >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i][0]))
			{
				if (atoi(argv[i]) > 0)
				{
					sum += atoi(argv[i]);
				}
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (sum);
	}
	else if (argc - 1 == 0)
	{
		printf("0\n");
	}
	return (0);

}
