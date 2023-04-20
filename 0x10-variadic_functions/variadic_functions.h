#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIABIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void pr_int(va_list);
void pr_char(va_list);
void pr_float(va_list);
void pr_str(va_list);

#endif
