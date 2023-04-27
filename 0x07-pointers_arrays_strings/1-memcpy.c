#include "main.h"
#include <stdio.h>
/**
 * _memcpy - a function that copies memory area
 *
 * @dest: memory area where bytes are copied to
 *
 * @src: memory area
 *
 * @n: bytes to memory area
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;

	if (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
