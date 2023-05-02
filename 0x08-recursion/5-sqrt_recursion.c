#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @n: number thar has a square root
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (sqrt_(n, 1));
}
/**
 * _sqrt - _sqrt_recursion
 *
 * @n: number
 *
 * @a: number
 *
 * Return: sqrt
 */
int _sqrt(int n, int a)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((a * a) > n)
	{
		return (-1);
	}
	while (a * a == n)
	{
		return (a);
	}
	return (_sqrt(n, a + 1));
}
