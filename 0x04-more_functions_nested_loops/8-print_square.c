#include "main.h"

/**
<<<<<<< HEAD
 * print_square - prints a square, followed by a new line.
 * @size: to be declared.
 */
=======
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
*/
>>>>>>> f1dd624f5a72ef3204a5147c536f797bb7e6d1bd

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
