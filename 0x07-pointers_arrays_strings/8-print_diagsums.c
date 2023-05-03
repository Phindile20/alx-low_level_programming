#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @a: square matrix of integer
 *
 * @size: size of integer
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0, s2 = 0, b;

	for (b = 0; b < size; b++)
	{
		s1 = s1 + a[b * size + b];
	}

	for (b = size - 1; b >= 0; b--)
	{
		s2 += a[b * size + (size - b - 1)];
	}

	printf("%d, %d\n", s1, s2);
}
