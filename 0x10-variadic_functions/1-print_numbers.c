#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers
 *
 * @separator: is the string to be printed between numbers
 *
 * @n: is the number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);

	if (i < n)
	{
		printf("%d", va_arg(list, int));
		i++;
		while (i < n && (separator))
			printf("%s", separator);
	}
	putchar(10);
	va_end(list);
}
