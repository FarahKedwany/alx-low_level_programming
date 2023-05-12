#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the file name.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: name of file.
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
