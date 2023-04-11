#include "main.h"
#include <stdio.h>
/**
 * factorial - prints a factorial number
 *
 * @n: lower than 0
 *
 * Return:1
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
