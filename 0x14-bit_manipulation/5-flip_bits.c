#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: unsigned long int one
 * @m: unsigned long int two
 *
 * Return: the number of bits you would need to flip
 * to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ns;

	for (ns = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			ns++;
	}

	return (ns);
}
