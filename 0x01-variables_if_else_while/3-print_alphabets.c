#include <stdio.h>

/**
 * main - Description
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);
	for (letter = 'A'; letter <= 'z'; letter++)
		putchar (letter);
	putchar ('\n');

	return(0);
}
