#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - description.
 *
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);

	putchar ('\n');
}
