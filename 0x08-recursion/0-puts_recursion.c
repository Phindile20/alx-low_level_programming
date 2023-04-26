#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Write a function that prints a string
 * @s : char
 * Return : void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion((s + 1));
}
