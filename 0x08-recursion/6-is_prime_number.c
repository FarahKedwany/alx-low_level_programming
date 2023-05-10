#include "main.h"

/**
 * prrime - Makes possible to evaluate from 1 to n
 * @x: same number as n
 * @y: number that moves from 1 to n
 *
 * Return: On success 1.
 */

int prrime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prrime(x, y + 1));
}

#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prrime(n, 2));
}
