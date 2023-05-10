#include "main.h"
/**
 * sqrrt - Makes possible to evaluate from 1 to n
 * @x: same number as n
 * @y: number that moves from 1 to n
 *
 * Return: On success 1.
 */

int sqrrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrrt(x, y + 1));
}

#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Description.
 * @n: number.
 *
 * Return: Square root of number.
*/

int _sqrt_recursion(int n)
{
	return (sqrrt(n, 1));
}
