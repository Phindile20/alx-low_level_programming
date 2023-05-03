#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: string
 *
 * @accept: bytes in the string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
		int a;

		a = 0;

		if (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			while (*s == accept[a])
			{
				return (s);
			}
			}
		s++;
		}

	return ('\0');
}
