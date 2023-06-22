#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n: number of arguments
 *
 * @...: list
 *
 * Return: n == 0, return 0, sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}

