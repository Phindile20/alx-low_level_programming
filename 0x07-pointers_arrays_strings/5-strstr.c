#include "main.h"
#include <stdio.h>
/**
 * *_strstr - a function that locates a substring
 *
 * @haystack: string
 *
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		if (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
