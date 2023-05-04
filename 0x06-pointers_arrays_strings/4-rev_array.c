#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: integer
 * @n: integer
 *
*/

void reverse_array(int *a, int n)
{
	int i, x;

	x = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int b, z;

		b = a[i];
		z = a[x];
		a[i] = z;
		a[x] = b;
		x--;
	}
}
