#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line.
 *
 */

void print_numbers(void)
{
        int num;

        for (num = '0'; num <= '9'; num++)
        {
                putchar (num + '0');
        }

        putchar ('\n');
}
