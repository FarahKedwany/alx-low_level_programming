#include "main.h"

/**
 * main - description.
 *
 * Return: Alwways 0.
*/

void print_alphabet(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
