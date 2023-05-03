#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - a function that prints anything
 *
 * @format: all types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *point;
	int i = 0;

	va_start(list, format);
	if (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(list, int));
				break;
			case 's':
				point = va_arg(list, char *);
				while (point == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", point);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
