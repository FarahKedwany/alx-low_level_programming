#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication,
 * followed by a new line.
 * @argc: number of arguments.
 * @argv: vector of arguments.
 *
 * Return: 0 if success, 1 if error.
 */
int main(int argc, char **argv)
{
	int mul = 0;

	if (argc - 1 == 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
