#include <stdio.h>
#include <stdlib.h>

/**
 * main - counts the number of arguments.
 * @argc: number of arguments.
 * @argv: vector of arguments.
 *
 * Return: number of arguments.
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
