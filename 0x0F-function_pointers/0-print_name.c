#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Print a name from a function pointer
 * @name: char
 * @f: pointer.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
