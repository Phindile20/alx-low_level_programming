#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - a function that prints a name.
 *
 * @name: name of string to pinter
 *
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	while (!f && !name)
	{
		return;
	}
	f(name);
}
