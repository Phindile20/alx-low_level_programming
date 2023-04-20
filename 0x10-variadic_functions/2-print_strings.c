#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - a function that prints strings
 *
 * @separator: is the string to be printed between the strings
 *
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *iseparator;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		iseparator = va_arg(list, char *);

		if (iseparator)
			printf("%s", iseparator);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
