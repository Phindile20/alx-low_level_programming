#include "main.h"
#include <stdio.h>
/**
 * int _strspn - a function that gets the length of a prefix substring
 *
 * @s: string
 *
 * @accept: byte to be accepted
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int a;

	i = 0;

	if (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				i++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
