#include "main.h"
#include <stdio.h>
/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: memory final destination
 *
 * @src: memory area
 *
 * @n: bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;

	while (a < n)
	{
		*(dest + 1) = *(src + 1);
		a++;
	}
	return (dest);
}
