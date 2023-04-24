#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: final destination
 * @src: source
 * @n: inputs integer
 *
 *Return: return to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	if (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
