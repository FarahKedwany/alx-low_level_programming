#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
*/

void print_alphabet_x10(void)

{
	char letter;
	int count = 0;
	while (count < 10)
       	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar (letter);

		putchar ('\n');
	}
}
