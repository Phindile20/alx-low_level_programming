#include "main.h"

/**
 *  _memset - write a function that fills memory with a constant byte.
 *  @s: the memory area 
 *  @b: the constant byte
 *  @n: function fills the first n
 *  Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

int size = n; /* only accept positive numbers */

if (size > 0)
{
int i;

for (i = 0; i < size; i++)
s[i] = b;
}

return (s);
}
