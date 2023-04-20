#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Write a function that prints a string
 * @s : char
 * Return : void
 */

void _puts_recursion(char *s)
{
	while (!*s)
	{
		putchar('\n');
		return;
	}
	_puts_recursion((s + 1));
	putchar(*s);
}
