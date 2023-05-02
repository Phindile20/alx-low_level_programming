#include "main.h"
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string
 *
 * @s: string
 *
 * @c: occurrence of the character in string
 *
 * Return: a pointer to the first occurrence of
 * the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	while (s[10] != '\0')
	{
		if (s[a] == c)
		{
			return ((s + a));
		}
		a++;
	}
	if (c == '\0')
	{
		return ((s + a));
	}
	return (NULL);
}

